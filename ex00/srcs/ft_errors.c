/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgorghan <bgorghan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:40:42 by bgorghan          #+#    #+#             */
/*   Updated: 2018/10/07 21:20:46 by cdenys-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

void	ft_ans(char ls)
{
	if (ls == '?')
		write(1, "Do you really wanna know?", 26);
	else if (ls == '!')
		write(1, "Say it louder!", 14);
	else if (ls == '.')
		write(1, "I think we should discuss this.", 31);
	else if ((ls >= 'a' && ls <= 'z') || (ls >= 'A' && ls <= 'Z'))
		write(1, "I don't want to think about it.", 31);
	else
		write(1, "Whaaaat are you saying?..", 25);
	write(1, "\n", 1);
}

void	ft_errors(char *arg)
{
	char	ls;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (arg[i])
	{
		i++;
		len++;
	}
	ls = arg[len - 1];
	while ((ls == ' ' || ls == '\t' || ls == '\n') && len > 0)
	{
		ls = arg[len - 1];
		len--;
	}
	ft_ans(ls);
}
