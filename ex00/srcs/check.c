/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdenys-a <cdenys-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 16:33:33 by cdenys-a          #+#    #+#             */
/*   Updated: 2018/10/07 23:04:19 by cdenys-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int	ft_arrcmp(char *s1, char **s2, int *dimensions)
{
	int x;
	int y;
	int i;

	x = 0;
	y = 0;
	i = 0;
	while (y < dimensions[1])
	{
		x = 0;
		while (x < dimensions[0])
		{
			if (s1[i] == '\n' && s1[i])
				i++;
			if (s1[i] != s2[y][x])
				return (0);
			else if (s1[i] == s2[y][x])
			{
				x++;
				i++;
			}
		}
		y++;
	}
	return (1);
}

int	*check(char *input, char ***chkarray, int *dimensions)
{
	int *out;
	int n;
	int isany;

	out = malloc(sizeof(int) * 5);
	n = 0;
	isany = 0;
	while (n < 5)
	{
		out[n] = ft_arrcmp(input, chkarray[n], dimensions);
		isany += out[n];
		n++;
	}
	return (isany ? out : 0);
}
