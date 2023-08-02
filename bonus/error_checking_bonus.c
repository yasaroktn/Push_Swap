/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checking_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 00:24:27 by yokten            #+#    #+#             */
/*   Updated: 2023/08/01 15:54:09 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	show_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	same_numbers(int *a, int i)
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
