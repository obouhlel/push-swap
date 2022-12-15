/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:08:08 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 15:08:12 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//we take the last list, and we add the new list
void	ft_stackadd_back(t_stack **stack, t_stack *new)
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
	tmp = ft_stacklast(tmp);
	tmp->next = new;
}
