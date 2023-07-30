/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:20:30 by yokten            #+#    #+#             */
/*   Updated: 2023/07/30 22:04:43 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	total_element(char **av)
{
	char	**array;
	int		i;
	int		j;
	int		x;

	i = 1;
	x = 0;
	while (av[i] != NULL)
	{
		array = ft_split(av[i], ' ');
		j = 0;
		while (array[j])
			j++;
		x += j;
		i++;
	}
	if (x == 0)
		show_error();
	return (x);
}

int	*parse_control(char **av, int ta)
{
	char	**array;
	int		i;
	int		j;
	int		x;
	int		*res;

	i = 1;
	x = 0;
	res = malloc(sizeof(int) * (ta));
	while (av[i] != NULL)
	{
		array = ft_split(av[i], ' ');
		j = 0;
		while (array[j] != NULL)
		{
			res[x] = ft_atoi(array[j]);
			printf("---------->%d\n", res[x]);
			x++;
			j++;
		}
		free(array);
		printf("aaaa%d\n", res[x]);
		i++;
	}
	for (int q = 0; q < ta; q++)
		printf("<<<<<<<<<------>>>>>>>>>%d\n", res[q]);
	return (res);
}
