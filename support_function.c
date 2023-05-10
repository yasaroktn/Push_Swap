#include "push_swap.h"

void	which_function(t_stack *stack, int len)
{	
	if (len == 2)
		sort_2(stack);
	else if (len == 3)
		sort_3(stack);
	//else if (len > 3)
		//sort_5(stack, len);
	else if (len > 5)
		butterfly(stack, len);
}

void	sort_2(t_stack *stack)
{
	if (stack->a[0] > stack->a[1])
	{
		ft_putstr_fd("sa\n", 1);
		ft_swap(stack, 'a');
	}
}

void	sort_3(t_stack *stack)
{
	if (stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2])
	{
		ft_putstr_fd("ra\n", 1);
		ft_rotate(stack, 'a', 3);
	}
	if (stack->a[0] > stack->a[1])
	{
		ft_putstr_fd("sa\n", 1);
		ft_swap(stack, 'a');
	}
	if (stack->a[1] > stack->a[2])
	{
		ft_putstr_fd("rra\n", 1);
		ft_reverse_rotate(stack, 'a', 3);
		sort_3(stack);
	}
}

void	butterfly(t_stack *stack, int len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	stack->na = len;
	stack->nb = 0;
	while (i < len)
	{
		if (stack->a[j] == stack->sorted[i])
		{
			if (i <= stack->nb)
				butterfly_infrastructure(stack, 1);
			else if (i > stack->nb && i <= stack->nb + stack->op)
				butterfly_infrastructure(stack, 2);
			else
				butterfly_infrastructure(stack, 3);
			j++;
			i = 0;
		}
		else
			i++;
	}
	i = 0;
	while (i < len)
		printf("%d ", stack->b[i++]);
	printf ("\n");
	butterfly_last_move(stack, len);
		i = 0;
	while (i < len)
		printf("%d ", stack->a[i++]);
	printf ("\n");
	i = 0;
	while (i < len)
		printf("%d ", stack->sorted[i++]);
}