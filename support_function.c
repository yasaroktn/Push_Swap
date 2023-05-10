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
			{
				ft_putstr_fd("pb\n", 1);
				ft_push_b(stack, stack->na, stack->nb);
				ft_putstr_fd("rb\n", 1);
				ft_rotate(stack, 'b', stack->nb);
				stack->nb++;
				stack->na--;
			}
			else if (i > stack->nb && i <= stack->nb + stack->op)
			{
				ft_putstr_fd("pb\n", 1);
				ft_push_b(stack, stack->na, stack->nb);
				stack->nb++;
				stack->na--;
			}
			else
			{
				ft_putstr_fd("ra\n", 1);
				ft_rotate(stack, 'a', stack->na);
			}
			j++;
			i = 0;
		}
		else
			i++;
	}
	i = 0;
	while (i < stack->nb)
		printf("%d ", stack->b[i++]);

}