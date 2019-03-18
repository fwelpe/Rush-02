/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_dimensions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdenys-a <cdenys-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 20:07:08 by cdenys-a          #+#    #+#             */
/*   Updated: 2018/10/07 16:15:07 by cdenys-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int	*calc_dimensions(char *s)
{
	int				*out;
	unsigned int	i;
	int				chk;

	out = malloc(sizeof(int) * 2);
	out[0] = 0;
	out[1] = 0;
	i = 0;
	chk = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
		{
			if (!out[0])
				out[0] = i;
			else if (chk != out[0])
				return (0);
			chk = 0;
			out[1]++;
		}
		else
			chk++;
		i++;
	}
	return (out);
}
