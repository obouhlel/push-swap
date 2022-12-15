/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacklast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:08:48 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 15:09:28 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//to take the last list
t_stack	*ft_stacklast(t_stack *stack)
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
