# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yokten <yokten@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/31 05:53:23 by yokten            #+#    #+#              #
#    Updated: 2023/08/02 05:49:37 by yokten           ###   ########.fr        #
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

BFILES = bonus/checker_bonus.c			 	 \
		 bonus/error_checking_bonus.c		 \
		 bonus/ft_split_bonus.c			  	 \
		 bonus/get_next_line_bonus.c		 \
		 bonus/get_next_line_utils_bonus.c   \
		 bonus/moves_bonus.c 				 \
		 bonus/parse_functions_bonus.c	     \
		 bonus/utils_bonus.c				 \
		 
NAME = push_swap
BNAME = bonus/checker
OBJS = ${FILES:.c=.o}
BOBJS = ${BFILES:.c=.o}
FLAGS = -Wall -Wextra -Werror
all : ${NAME}
${NAME}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}
bonus : ${BNAME}
${BNAME}: ${BOBJS}
	${CC} ${FLAGS} ${BOBJS} -o ${BNAME}
fclean :
	rm -rf ${OBJS} ${BOBJS} ${NAME} ${BNAME}
clean : 
	rm -rf ${OBJS} ${BOBJS} 
%.o:%.c
	${CC} -c $^ ${FLAGS} -o $@

re : fclean all

git :
	git add .
	git commit -m "auto commit"
	git push

.PHONY: all re fclean git
