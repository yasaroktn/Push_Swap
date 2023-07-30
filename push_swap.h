/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 00:27:46 by yokten            #+#    #+#             */
/*   Updated: 2023/07/30 20:18:25 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	*sorted;
	int	op;
	int	nb;
	int	na;
	int	tmp;
	int	tmplen;
}	t_stack;

void		ft_putstr_fd(char *s, int fd);
int			ft_atoi(char *str);
int			total_element(char **av);
int			sort_control(int *arry, int len);
void		some_numbers(int *a, int i);
void		add_malloc(t_stack *stack, int len);
void		show_error(void);
void		which_function(t_stack *stack, int len);
void		ft_swap(t_stack *stack, char c);
void		ft_push_a(t_stack *stack, int lena, int lenb);
void		ft_push_b(t_stack *stack, int lena, int lenb);
void		ft_rotate(t_stack *stack, char c, int len);
void		ft_reverse_rotate(t_stack *stack, char c, int len);
int			*sorted_numbers(int *a, int ta);
int			square_root(int ta);
int			logarithm(int ta);
void		sort_2(t_stack *stack);
void		sort_3(t_stack *stack);
void		sort_5(t_stack *stack, int len);
void		butterfly(t_stack *stack, int len);
void		butterfly_last_move(t_stack *stack, int len);
void		butterfly_infrastructure(t_stack *stack, int flag);
void		butterfly_last_inf(t_stack *stack, int flag);
void		sort_5_inf(t_stack *stack, int len, int i, int j);
char		**ft_split(char	const *s, char c);
int			*parse_control(char **av, int ta);
#endif