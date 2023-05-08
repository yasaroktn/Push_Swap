#include "push_swap.h"

void	which_function(t_stack *stack, int len)
{	
	if (len == 2)
		sort_2(stack);
	else if (len == 3)
		sort_3(stack);
//	else if (len <= 5)
//		sort_5(stack, len);
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

/*void	sort_5(t_stack *stack, int len)
{
	
}

int	main()
{
	t_stack *stack;

	stack = malloc(sizeof(t_stack));
	stack->a = malloc(sizeof(int) * 3);
	stack->a[0] = 5;
	stack->a[1] = 3;
	stack->a[2] = 8;
	which_function(stack, 3);
	int i = 0;
	while (i < 3)
		printf("%d", stack->a[i++]);
}*/