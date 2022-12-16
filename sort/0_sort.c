/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:32:12 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/16 17:31:41 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_stack *stack)
{
	int		tmp;

	if (!stack)
		return ;
	tmp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = tmp;
}

void	rotate(t_stack *stack)
{
	t_stack	*swap;
	int		tmp;

	swap = NULL;
	if (!stack)
		return ;
	swap = stack;
	while (swap->next)
	{
		tmp = swap->value;
		swap->value = swap->next->value;
		swap->next->value = tmp;
		swap = swap->next;
	}
}

void	reverse_rotate(t_stack *stack)
{
	t_stack	*swap;
	int		tmp;

	swap = NULL;
	if (!stack)
		return ;
	swap = stack;
	swap = ft_stack_last(swap);
	while (swap->previous)
	{
		tmp = swap->value;
		swap->value = swap->previous->value;
		swap->previous->value = tmp;
		swap = swap->previous;
	}
}
