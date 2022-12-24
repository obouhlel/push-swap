/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_last.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:45:08 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/24 12:40:27 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*ft_stack_last(t_stack *stack)
{
	t_stack	*tmp;

	tmp = NULL;
	if (!stack)
		return (NULL);
	while (stack && stack->next)
	{
		tmp = stack;
		stack = stack->next;
		stack->previous = tmp;
	}
	return (stack);
}
