/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:41:00 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/18 11:48:25 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	tmp;

	tmp = *stack_a;
	*stack_a = *stack_b;
	*stack_b = tmp;
}

void	sa(t_stack *stack_a, int size_a)
{
	if (size_a > 1)
	{
		swap(&stack_a[0], &stack_a[1]);
		reset_index_of_stack(stack_a, size_a);
	}
	ft_putendl("sa");
}

void	sb(t_stack *stack_b, int size_b)
{
	if (size_b > 1)
	{
		swap(&stack_b[0], &stack_b[1]);
		reset_index_of_stack(stack_b, size_b);
	}
	ft_putendl("sb");
}

void	ss(t_stack *stack_a, t_stack *stack_b, int size_a, int size_b)
{
	if (size_a > 1)
		swap(&stack_a[0], &stack_a[1]);
	if (size_b > 1)
		swap(&stack_b[0], &stack_b[1]);
	ft_putendl("ss");
}
