NAME = push_swap
FILES = push_swap.c add_malloc.c error_checking.c moves.c optimized_number.c support_function.c utils.c ft_split.c parse_functions.c
OBJS = ${FILES:.c=.o}
FLAGS = -Wall -Wextra -Werror #-fsanitize=address
all : ${NAME}
${NAME}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}
fclean : 
	rm -rf ${OBJS} $ 
%.o:%.c
	${CC} -c $^ ${FLAGS} -o $@

git :
	git add .
	git commit -m "auto commit"
	git push