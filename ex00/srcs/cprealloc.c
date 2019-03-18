/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cprealloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdenys-a <cdenys-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 21:56:41 by cdenys-a          #+#    #+#             */
/*   Updated: 2018/10/07 16:14:58 by cdenys-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

void	*ft_strcpy(char *in, char *out, int bytes)
{
	int i;

	i = 0;
	while (i < bytes)
	{
		out[i] = in[i];
		i++;
	}
	return (out);
}

char	*cprealloc(char *in, int step)
{
	char	*out;

	out = malloc(step * MALLOC_SIZE);
	ft_strcpy(in, out, (step - 1) * MALLOC_SIZE);
	free(in);
	return (out);
}
