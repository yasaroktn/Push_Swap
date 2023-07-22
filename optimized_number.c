/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimized_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 00:25:17 by yokten            #+#    #+#             */
/*   Updated: 2023/07/23 02:47:56 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*sorted_numbers(int *a, int ta)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	j = 0;
	while (j < ta)
	{
		while (i < ta)
		{
			if (a[j] > a[i])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
			i++;
		}
		j++;
		i = j;
	}
	return (a);
}

int	logarithm(int ta)
{
	int	i;

	i = 0;
	while (ta > 0)
	{
		ta /= 2;
		i++;
	}
	return (i);
}

int	square_root(int ta)
{
	int	i;

	i = 3;
	while (1)
	{
		if (i * i >= ta)
			break ;
		i++;
	}
	return (i);
}

void	butterfly_infrastructure(t_stack *stack, int flag)
{
	if (flag == 1)
	{
		ft_putstr_fd("pb\n", 1);
		ft_push_b(stack, stack->na, stack->nb);
		ft_putstr_fd("rb\n", 1);
		ft_rotate(stack, 'b', stack->nb);
		stack->nb++;
		stack->na--;
	}
	if (flag == 2)
	{
		ft_putstr_fd("pb\n", 1);
		ft_push_b(stack, stack->na, stack->nb);
		stack->nb++;
		stack->na--;
	}
	if (flag == 3)
	{
		ft_putstr_fd("ra\n", 1);
		ft_rotate(stack, 'a', stack->na);
	}
}

void	butterfly_last_move(t_stack *stack, int len)
{
	int	i;
	int	j;

	i = len - 1;
	j = 0;
	while (j < len)
	{
		if (stack->b[j] == stack->sorted[i] && j == 0)
		{
			butterfly_last_inf(stack, 1);
			i--;
			if (i == -1)
				break ;
		}
		else if (stack->b[j] == stack->sorted[i])
		{
			if (j < (i / 2))
				butterfly_last_inf(stack, 2);
			else if (j >= (i / 2))
				butterfly_last_inf(stack, 3);
			j = 0;
		}
		else
			j++;
	}
}
