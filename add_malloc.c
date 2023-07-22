/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_malloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 00:32:16 by yokten            #+#    #+#             */
/*   Updated: 2023/06/08 00:33:42 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_malloc(t_stack *stack, int len)
{
	stack->a = malloc(sizeof(int) * len);
	stack->b = malloc(sizeof(int) * len);
	stack->sorted = malloc(sizeof(int) * len);
}
