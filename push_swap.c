#include "push_swap.h"

int main(int ac, char **av)
{
	int ta;
	int i;
	t_stack *stack;

	i = 0;
	stack = malloc(sizeof(t_stack));
	stack->a = malloc(sizeof(int) * 3);
	ta = total_element(ac);
	while (++i <= ta)
		stack->a[i - 1] = ft_atoi(av[i]);
	i = 0;
	while (i <= ta)
		some_numbers(stack->a, i++);
	which_function(stack, ta);
	return(0);
}  //3 9 1 2 4 7 6 8 5 0