/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checking.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 00:24:27 by yokten            #+#    #+#             */
/*   Updated: 2023/07/23 01:19:25 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	total_element(int ac)
{
	int	nbr;

	nbr = ac - 1;
	if (nbr == 0)
		show_error();
	return (nbr);
}

void	show_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	some_numbers(int *a, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (a[j] == a[i])
			show_error();
		j++;
	}
}

int	sort_control(int *arry, int len)
{
	int	i;

	i = 0;
	while (i + 1 < len)
	{
		if (arry[i] > arry[i + 1])
			return (0);
		i++;
	}
	return (1);
}
