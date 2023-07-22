/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 00:26:26 by yokten            #+#    #+#             */
/*   Updated: 2023/07/23 01:13:32 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		ta;
	int		i;
	t_stack	*stack;

	i = 0;
	ta = total_element(ac);
	stack = malloc(sizeof(t_stack));
	add_malloc(stack, ta);
	while (++i <= ta)
		stack->a[i - 1] = ft_atoi(av[i]);
	if (sort_control(stack->a, ta))
		return (0);
	i = 0;
	while (++i <= ta)
		stack->sorted[i - 1] = ft_atoi(av[i]);
	i = 0;
	while (i < ta)
		some_numbers(stack->sorted, i++);
	stack->sorted = sorted_numbers(stack->sorted, ta);
	i = 0;
	stack->op = logarithm(ta) + square_root(ta);
	which_function(stack, ta);
	return (0);
}
