/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 00:26:26 by yokten            #+#    #+#             */
/*   Updated: 2023/07/30 22:06:38 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		ta;
	int		i;
	t_stack	*stack;

	(void) ac;
	i = 0;
	ta = total_element(av);
	stack = malloc(sizeof(t_stack));
	add_malloc(stack, ta);
	stack->a = parse_control(av, ta);
	int x = 0;
	while (x < ta)
		printf("%d ", stack->a[x++]);
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
  	i = 0;
   	while (i < ta)
		printf("%d ", stack->a[i++]);
	return (0);
}
