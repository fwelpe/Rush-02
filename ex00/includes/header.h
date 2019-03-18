/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdenys-a <cdenys-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 13:49:37 by cdenys-a          #+#    #+#             */
/*   Updated: 2018/10/07 21:15:16 by cdenys-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define MALLOC_SIZE 262144

# include <unistd.h>
# include <stdlib.h>

char	*ft_putline(int len, char s, char m, char e);

char	**rush0000(int x, int y);

char	**rush0001(int x, int y);

char	**rush0002(int x, int y);

char	**rush0003(int x, int y);

char	**rush0004(int x, int y);

int		ft_atoi(char *str);

char	*cprealloc(char *s, int step);

int		*calc_dimensions(char *s);

void	ft_putchar(char c);

void	ft_errors(char *arg);

int		ft_arrcmp(char *s1, char **s2, int *dimensions);

int		*check(char *input, char ***chkarray, int *dimensions);

void	print_result(int *rushnums, int *dimensions);

char	***build_matrix(int x, int y);

void	ft_putnbr(int nb);

#endif
