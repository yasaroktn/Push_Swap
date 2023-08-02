/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 00:26:26 by yokten            #+#    #+#             */
/*   Updated: 2023/08/02 04:25:04 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	which_move(t_stack *stack, char *line)
{
	if (line[0] == 's' && line[1] == 'a' && line[2] == '\n')
		ft_swap(stack, 'a');
	else if (line[0] == 's' && line[1] == 'b' && line[2] == '\n')
		ft_swap(stack, 'b');
	else if (line[0] == 'p' && line[1] == 'a' && line[2] == '\n')
		push_inf(stack, 'a');
	else if (line[0] == 'p' && line[1] == 'b' && line[2] == '\n')
		push_inf(stack, 'b');
	else if (line[0] == 'r' && line[1] == 'a' && line[2] == '\n')
		ft_rotate(stack, 'a', stack->na);
	else if (line[0] == 'r' && line[1] == 'b' && line[2] == '\n')
		ft_rotate(stack, 'b', stack->nb);
	else if (line[0] == 'r' && line[1] == 'r' && line[2] == '\n')
	{
		ft_rotate(stack, 'a', stack->na);
		ft_rotate(stack, 'b', stack->nb);
	}
	else if (line[0] == 's' && line[1] == 's' && line[2] == '\n')
		ft_swap(stack, 's');
	else if (line[2] == 'a' || line[2] == 'b' || line[2] == 'r')
		which_move_rr(stack, line);
	else
		show_error();
}

void	push_inf(t_stack *stack, char c)
{
	if (c == 'a')
	{
		ft_push_a(stack, stack->na, stack->nb);
		stack->na++;
		stack->nb--;
	}
	else if (c == 'b')
	{
		ft_push_b(stack, stack->na, stack->nb);
		stack->na--;
		stack->nb++;
	}
}

void	which_move_rr(t_stack *stack, char *line)
{
	if (line[0] == 'r' && line[1] == 'r' && line[2] == 'a' && line[3] == '\n')
		ft_reverse_rotate(stack, 'a', stack->na);
	else if ((line[0] == 'r' && line[1] == 'r' && line[2] == 'b') && 
		(line[3] == '\n'))
		ft_reverse_rotate(stack, 'b', stack->nb);
	else if ((line[0] == 'r' && line[1] == 'r' && line[2] == 'r') && 
		(line[3] == '\n'))
	{
		ft_reverse_rotate(stack, 'a', stack->na);
		ft_reverse_rotate(stack, 'b', stack->nb);
	}
	else
		show_error();
}

void	check_gnl(t_stack *stack, char	*line)
{
	line = get_next_line(0);
	while (line != 0)
	{
		which_move(stack, line);
		line = get_next_line(0);
	}
	printf ("\n");
}

int	main(int ac, char **av)
{
	int		ta;
	int		i;
	t_stack	*stack;
	char	*line;

	if (ac == 1)
		return (0);
	ta = total_element(av);
	stack = malloc(sizeof(t_stack));
	stack->b = malloc(sizeof(int) * ta);
	stack->a = parse_control(av, ta);
	stack->na = ta;
	stack->nb = 0;
	i = 0;
	while (i < ta)
		same_numbers(stack->a, i++);
	check_gnl(stack, line);
	if (!get_next_line(0) && sort_control(stack->a, ta))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (0);
}
