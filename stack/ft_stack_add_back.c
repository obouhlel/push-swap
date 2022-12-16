/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_add_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:40:36 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/16 15:26:09 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_stack_add_back(t_stack **stack, t_stack *new)
{
	t_stack	*tmp;

	tmp = *stack;
	if (!stack)
		return ;
	if (!(*stack))
	{
		*stack = new;
		return ;
	}
	if (!new)
		return ;
	tmp = ft_stack_last(tmp);
	tmp->next = new;
}
