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
	while (str[i] <= '9' && str[i] >= '0')
	{
		if (str[i] < '0' || str[i] > '9')
			show_error();
		res = (res * 10) + str[i++] - '0';
		if (res > 2147483648)
			show_error();
	}
	if ((res * sign) == 2147483648) 
		show_error();
	return ((int)res * sign);
}
