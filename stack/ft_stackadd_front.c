/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:02:46 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 15:07:57 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//to add in front the list
void	ft_stackadd_front(t_stack **stack, t_stack *new)
{
	if (!stack || !new)
		return ;
	if (!(*stack))
	{
		(*stack) = new;
		return ;
	}
	(*stack)->previous = new;
	new->next = (*stack);
	(*stack) = new;
}
