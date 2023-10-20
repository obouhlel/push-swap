/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:41:00 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 12:35:46 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "api.h"
#include "utils.h"

static
void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sa(t_stack *stack, bool print)
{
	if (stack->info_a.size > 1)
	{
		swap(&stack->a[0], &stack->a[1]);
		if (print)
			ft_putendl("sa");
	}
}

void	sb(t_stack *stack, bool print)
{
	if (stack->info_b.size > 1)
	{
		swap(&stack->b[0], &stack->b[1]);
		if (print)
			ft_putendl("sb");
	}
}

void	ss(t_stack *stack, bool print)
{
	if (stack->info_a.size > 1 && stack->info_b.size > 1)
	{
		sa(stack, FALSE);
		sb(stack, FALSE);
		if (print)
			ft_putendl("ss");
	}
}
