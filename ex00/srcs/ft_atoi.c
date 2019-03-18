/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjarmen- <qjarmen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 19:01:03 by qjarmen-          #+#    #+#             */
/*   Updated: 2018/10/07 16:14:57 by cdenys-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int	ft_if_any_symbols(char *str)
{
	int i;

	i = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '+' ||
	str[i] == '\r' || str[i] == '\v' || str[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int res;
	int i;
	int minus;

	minus = 1;
	res = 0;
	i = ft_if_any_symbols(str);
	if (str[0] == '-')
	{
		minus = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (i >= 19)
			return (-1);
		if (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + str[i] - '0';
			i++;
		}
		else
			return (res * minus);
	}
	return (res * minus);
}
