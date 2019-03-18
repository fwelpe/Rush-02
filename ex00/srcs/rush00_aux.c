/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00_aux.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdenys-a <cdenys-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 18:03:23 by cdenys-a          #+#    #+#             */
/*   Updated: 2018/10/07 18:03:25 by cdenys-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

char	**rush0000(int x, int y)
{
	int		i;
	char	**result;

	if (x <= 0 || y <= 0)
		return (result = 0);
	i = 0;
	result = (char**)malloc(sizeof(char*) * y);
	while (i < y)
	{
		if (i == 0 || i == y - 1)
			result[i] = ft_putline(x, 'o', '-', 'o');
		else
			result[i] = ft_putline(x, '|', ' ', '|');
		i++;
	}
	return (result);
}

char	**rush0001(int x, int y)
{
	int		i;
	char	**result;

	if (x <= 0 || y <= 0)
		return (result = 0);
	i = 0;
	result = (char**)malloc(sizeof(char*) * y);
	while (i < y)
	{
		if (i == 0)
			result[i] = ft_putline(x, '/', '*', '\\');
		else if (i == y - 1)
			result[i] = ft_putline(x, '\\', '*', '/');
		else
			result[i] = ft_putline(x, '*', ' ', '*');
		i++;
	}
	return (result);
}

char	**rush0002(int x, int y)
{
	int		i;
	char	**result;

	if (x <= 0 || y <= 0)
		return (result = 0);
	i = 0;
	result = (char**)malloc(sizeof(char*) * y);
	while (i < y)
	{
		if (i == 0)
			result[i] = ft_putline(x, 'A', 'B', 'A');
		else if (i == y - 1)
			result[i] = ft_putline(x, 'C', 'B', 'C');
		else
			result[i] = ft_putline(x, 'B', ' ', 'B');
		i++;
	}
	return (result);
}

char	**rush0003(int x, int y)
{
	int		i;
	char	**result;

	if (x <= 0 || y <= 0)
		return (result = 0);
	i = 0;
	result = (char**)malloc(sizeof(char*) * y);
	while (i < y)
	{
		if (i == 0)
			result[i] = ft_putline(x, 'A', 'B', 'C');
		else if (i == y - 1)
			result[i] = ft_putline(x, 'A', 'B', 'C');
		else
			result[i] = ft_putline(x, 'B', ' ', 'B');
		i++;
	}
	return (result);
}

char	**rush0004(int x, int y)
{
	int		i;
	char	**result;

	if (x <= 0 || y <= 0)
		return (result = 0);
	i = 0;
	result = (char**)malloc(sizeof(char*) * y);
	while (i < y)
	{
		if (i == 0)
			result[i] = ft_putline(x, 'A', 'B', 'C');
		else if (i == y - 1)
			result[i] = ft_putline(x, 'C', 'B', 'A');
		else
			result[i] = ft_putline(x, 'B', ' ', 'B');
		i++;
	}
	return (result);
}
