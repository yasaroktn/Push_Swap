#include "push_swap.h"

int main(int ac, char **av)
{
	int ta;
	int i;
	t_stack *stack;

	i = 0;
	ta = total_element(ac);
	stack = malloc(sizeof(t_stack));
	add_malloc(stack, ta);
	while (++i <= ta)
		stack->a[i - 1] = ft_atoi(av[i]);
	i = 0;
	while (++i <= ta)
		stack->sorted[i - 1] = ft_atoi(av[i]);
	i = 0;
	while (i < ta)
		some_numbers(stack->sorted, i++);
	stack->sorted = sorted_numbers(stack->sorted, ta);
		i = 0;
	stack->op = logarithm(ta) + square_root(ta);
	which_function(stack, ta);
	while(i < ta)
		printf("%d ", stack->a[i++]);
	return(0);
}   //3 9 1 2 4 7 6 8 5 0 
