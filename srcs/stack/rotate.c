/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:40:54 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/18 11:47:54 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack *stack, int size)
{
	t_stack	tmp;
	int		i;

	i = 0;
	tmp = stack[0];
	while (i < size - 1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[size - 1] = tmp;
	reset_index_of_stack(stack, size);
}

void	ra(t_stack *stack_a, int size_a)
{
	if (size_a > 1)
		rotate(stack_a, size_a);
	ft_putendl("ra");
}

void	rb(t_stack *stack_b, int size_b)
{
	if (size_b > 1)
		rotate(stack_b, size_b);
	ft_putendl("rb");
}

void	rr(t_stack *stack_a, t_stack *stack_b, int size_a, int size_b)
{
	if (size_a > 1)
		rotate(stack_a, size_a);
	if (size_b > 1)
		rotate(stack_b, size_b);
	ft_putendl("rr");
}
