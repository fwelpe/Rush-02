/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdenys-a <cdenys-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:56:09 by cdenys-a          #+#    #+#             */
/*   Updated: 2018/10/07 23:02:58 by cdenys-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int		main(void)
{
	char	*input;
	int		i;
	int		step;
	int		*dmns;
	int		*rushnums;

	input = (char*)malloc(MALLOC_SIZE);
	i = 0;
	step = 1;
	while (read(0, &input[i], 1) > 0)
	{
		if (i >= step * MALLOC_SIZE - 1)
			input = cprealloc(input, ++step);
		i++;
	}
	input[i] = '\0';
	dmns = calc_dimensions(input);
	if (dmns)
		rushnums = check(input, build_matrix(dmns[0], dmns[1]), dmns);
	if (!(dmns && rushnums) || input[0] == '\0')
		ft_errors(input);
	else
		print_result(rushnums, dmns);
	return (0);
}
