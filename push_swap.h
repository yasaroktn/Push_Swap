#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_stack
{
    int *a;
    int *b;
    int tmp;
    int tmplen;
    int highest;
    int lowest;
}	t_stack;

void    ft_putstr_fd(char *s, int fd);
int	ft_atoi(char *str);
void	some_numbers(int *a, int i);
int		total_element(int ac);
void	show_error(void);
void	which_function(t_stack *stack, int len);
void    ft_swap(t_stack *stack, char c);
void	ft_push_a(t_stack *stack, int lena, int lenb);
void	ft_push_b(t_stack *stack, int lena, int lenb);
void	ft_rotate(t_stack *stack, char c, int len);
void	ft_reverse_rotate(t_stack *stack, char c, int len);
void    sort_2(t_stack *stack);
void	sort_3(t_stack *stack);
//void	sort_5(t_stack *stack, int len);
#endif