# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdenys-a <cdenys-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/06 13:02:43 by cdenys-a          #+#    #+#              #
#    Updated: 2018/10/07 20:52:25 by cdenys-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
SRCSCOLLE2 = srcs/calc_dimensions.c srcs/cprealloc.c srcs/ft_putline.c \
srcs/main.c srcs/rush00_aux.c srcs/rush00_matrix.c srcs/ft_errors.c \
srcs/check.c srcs/print_result.c srcs/ft_putnbr.c srcs/ft_putchar.c
HEADERS = includes/

${NAME}:
	gcc -Wall -Wextra -Werror -I${HEADERS} ${SRCSCOLLE2} -o ${NAME}

all: ${NAME} colle-00 colle-01 colle-02 colle-03 colle-04

colle-00:
	gcc -Wall -Wextra -Werror -I${HEADERS} srcs/colle00.c srcs/ft_putchar.c \
	srcs/ft_atoi.c -o colle-00

colle-01:
	gcc -Wall -Wextra -Werror -I${HEADERS} srcs/colle01.c srcs/ft_putchar.c \
	srcs/ft_atoi.c -o colle-01

colle-02:
	gcc -Wall -Wextra -Werror -I${HEADERS} srcs/colle02.c srcs/ft_putchar.c \
	srcs/ft_atoi.c -o colle-02

colle-03:
	gcc -Wall -Wextra -Werror -I${HEADERS} srcs/colle03.c srcs/ft_putchar.c \
	srcs/ft_atoi.c -o colle-03

colle-04:
	gcc -Wall -Wextra -Werror -I${HEADERS} srcs/colle04.c srcs/ft_putchar.c \
	srcs/ft_atoi.c -o colle-04

clean:
	rm ${NAME}

fclean: clean
	rm colle-00 colle-01 colle-02 colle-03 colle-04

re: clean ${NAME}

allre: fclean all
