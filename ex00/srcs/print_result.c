/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdenys-a <cdenys-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 17:31:07 by cdenys-a          #+#    #+#             */
/*   Updated: 2018/10/07 22:08:54 by cdenys-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int		print(int *dimensions, int i, int j)
{
	char	p;

	p = i + '0';
	write(1, "[colle-0", 8);
	write(1, &p, 1);
	write(1, "] [", 3);
	ft_putnbr(dimensions[0]);
	write(1, "] [", 3);
	ft_putnbr(dimensions[1]);
	write(1, "] ", 2);
	if (j > 1)
	{
		j--;
		write(1, "|| ", 3);
	}
	return (j);
}

void	print_result(int *rushnums, int *dimensions)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 5)
	{
		if (rushnums[i] == 1)
			j++;
		i++;
	}
	i = 0;
	while (i < 5)
	{
		if (rushnums[i] == 1)
		{
			j = print(dimensions, i, j);
		}
		i++;
	}
	write(1, "\n", 1);
}
