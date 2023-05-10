#include "push_swap.h"

void    add_malloc(t_stack *stack, int len)
{
    stack->a = malloc(sizeof(int) * len);
    stack->b = malloc(sizeof(int) * len);
    stack->sorted = malloc(sizeof(int) * len);
}