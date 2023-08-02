/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 00:27:46 by yokten            #+#    #+#             */
/*   Updated: 2023/08/02 09:53:28 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include "get_next_line_bonus.h"

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

int		ft_atoi(char *str);
int		total_element(char **av);
int		sort_control(int *arry, int len);
int		*parse_control(char **av, int ta);
void	ft_putstr_fd(char *s, int fd);
void	same_numbers(int *a, int i);
void	show_error(void);
void	ft_swap(t_stack *stack, char c);
void	ft_push_a(t_stack *stack, int lena, int lenb);
void	ft_push_b(t_stack *stack, int lena, int lenb);
void	ft_rotate(t_stack *stack, char c, int len);
void	ft_reverse_rotate(t_stack *stack, char c, int len);
void	which_move(t_stack *stack, char *line);
void	which_move_rr(t_stack *stack, char *line);
void	push_inf(t_stack *stack, char c);
void	array_free(char **array);
char	**ft_split(char	const *s, char c);
#endif