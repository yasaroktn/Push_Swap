/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 00:31:16 by yokten            #+#    #+#             */
/*   Updated: 2023/08/02 04:33:58 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int		i;
	long	res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[1] == '\0')
			show_error();
		if (str[0] == '-')
			sign = -sign;
		i++;
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			show_error();
		res = (res * 10) + str[i++] - '0';
	}
	res = res * sign;
	if ((res < -2147483648) || (res > 2147483647))
		show_error();
	return (res);
}
