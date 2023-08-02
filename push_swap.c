/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 00:26:26 by yokten            #+#    #+#             */
/*   Updated: 2023/08/02 04:42:48 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		ta;
	int		i;
	t_stack	*stack;

	if (ac == 1)
		return (0);
	ta = total_element(av);
	stack = malloc(sizeof(t_stack));
	stack->b = malloc(sizeof(int) * ta);
	stack->a = parse_control(av, ta);
	stack->sorted = parse_control(av, ta);
	i = 0;
	while (i < ta)
		same_numbers(stack->a, i++);
	if (sort_control(stack->a, ta))
		return (0);
	stack->sorted = sorted_numbers(stack->sorted, ta);
	stack->op = logarithm(ta) + square_root(ta);
	which_function(stack, ta);
	return (0);
}
