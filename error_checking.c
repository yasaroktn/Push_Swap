#include "push_swap.h"

int total_element(int ac)
{
	int nbr;

	nbr = ac - 1;
	if (nbr == 0)
		show_error();
	return (nbr);
}

void	show_error(void)
{
	ft_putstr_fd("Error\n", 1);
	exit(1);
}

void	some_numbers(int *a, int i)
{
	int j;

	j = 0;
	while(j < i)
	{
		if (a[j] == a[i])
			show_error();
		j++;
	}
}
