#include "push_swap.h"

int	*sorted_numbers(int *a, int ta)
{
	int i;
	int j;
	int tmp;

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
	i = 0;
	return(a);
}

int	logarithm(int ta)
{
	int i;

	i = 0;
	while(ta > 0)
	{
		ta /= 2;
		i++;
	}
	return (i);
}

int	square_root(int ta)
{
	int i;

	i = 3;
	while (1)
	{
		if (i * i >= ta)
			break;
		i++;
	}
	return(i);
}
