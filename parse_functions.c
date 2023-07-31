/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:20:30 by yokten            #+#    #+#             */
/*   Updated: 2023/07/31 05:39:24 by yokten           ###   ########.fr       */
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
		{
			j++;
			x++;
		}
		i++;
		array_free(array);
	}
	if (x == 0)
		return (0);
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
		if (av[i][0] == '\0')
			show_error();
		array = ft_split(av[i], ' ');
		j = 0;
		while (array[j] != NULL)
		{
			res[x] = ft_atoi(array[j]);
			x++;
			j++;
		}
		i++;
		array_free(array);
	}
	return (res);
}

void	array_free(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
}
