/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjarmen- <qjarmen-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 20:50:37 by qjarmen-          #+#    #+#             */
/*   Updated: 2018/10/07 19:53:50 by qjarmen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (j <= y && x > 0 && y > 0)
	{
		if (j == 1 && (i == 1 || i == x))
			ft_putchar('A');
		else if (j == y && (i == 1 || i == x))
			ft_putchar('C');
		else if (i == 1 || i == x || j == 1 || j == y)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
		if (i > x)
		{
			i = 1;
			j++;
			ft_putchar('\n');
		}
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 3)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	else
		write(1, "Wrong number of parameters!\n", 28);
	return (0);
}
