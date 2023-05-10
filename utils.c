#include "push_swap.h"

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
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	if (str[0] == '-' || str[0] == '+')
	{
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
	return (res * sign);
}
