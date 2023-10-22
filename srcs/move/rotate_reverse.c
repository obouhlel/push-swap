/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:40:47 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 12:33:47 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "api.h"
#include "utils.h"

static void	rotate_reverse(int *stack, int size)
{
	int	tmp;
	int	i;

	i = size - 1;
	tmp = stack[size - 1];
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[0] = tmp;
}

void	rra(t_stack *stack, bool print)
{
	if (stack->info_a.size >= 1)
	{
		rotate_reverse(stack->a, stack->info_a.size);
		if (print)
			ft_putendl("rra");
	}
}

void	rrb(t_stack *stack, bool print)
{
	if (stack->info_b.size >= 1)
	{
		rotate_reverse(stack->b, stack->info_b.size);
		if (print)
			ft_putendl("rrb");
	}
}

void	rrr(t_stack *stack, bool print)
{
	if (stack->info_a.size >= 1 && stack->info_b.size >= 1)
	{
		rotate_reverse(stack->a, stack->info_a.size);
		rotate_reverse(stack->b, stack->info_b.size);
		if (print)
			ft_putendl("rrr");
	}
}
