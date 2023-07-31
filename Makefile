# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yokten <yokten@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/31 05:53:23 by yokten            #+#    #+#              #
#    Updated: 2023/07/31 06:22:52 by yokten           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = push_swap.c  		\
 		error_checking.c 	\
		moves.c 			\
		optimized_number.c 	\
		support_function.c 	\
		utils.c 			\
		ft_split.c 			\
		parse_functions.c 	\

NAME = push_swap
OBJS = ${FILES:.c=.o}
FLAGS = -Wall -Wextra -Werror
all : ${NAME}
${NAME}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}
fclean :
	rm -rf ${OBJS}
%.o:%.c
	${CC} -c $^ ${FLAGS} -o $@

re : fclean all

git :
	git add .
	git commit -m "auto commit"
	git push

.PHONY: all re fclean git
