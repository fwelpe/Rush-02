/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putline.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdenys-a <cdenys-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 17:53:06 by cdenys-a          #+#    #+#             */
/*   Updated: 2018/10/07 16:14:55 by cdenys-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

char	*ft_putline(int len, char s, char m, char e)
{
	int		i;
	char	*line;

	i = 0;
	line = (char*)malloc(sizeof(char) * len + 1);
	while (i < len)
	{
		if (i == 0)
			line[i] = s;
		else if (i == len - 1)
			line[i] = e;
		else
			line[i] = m;
		i++;
	}
	line[i] = '\0';
	return (line);
}
