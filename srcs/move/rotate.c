/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:40:54 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 12:34:50 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "api.h"
#include "utils.h"

static void	rotate(int *stack, int size)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack[0];
	while (i < size - 1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[size - 1] = tmp;
}

void	ra(t_stack *stack, bool print)
{
	if (stack->info_a.size >= 1)
	{
		rotate(stack->a, stack->info_a.size);
		if (print)
			ft_putendl("ra");
	}
}

void	rb(t_stack *stack, bool print)
{
	if (stack->info_b.size >= 1)
	{
		rotate(stack->b, stack->info_b.size);
		if (print)
			ft_putendl("rb");
	}
}

void	rr(t_stack *stack, bool print)
{
	if (stack->info_a.size >= 1 && stack->info_b.size >= 1)
	{
		ra(stack, FALSE);
		rb(stack, FALSE);
		if (print)
			ft_putendl("rr");
	}
}
