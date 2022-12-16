/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacknew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:08:54 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/16 11:03:25 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//to create the new list
t_stack	*ft_stacknew(int value)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->previous = NULL;
	stack->next = NULL;
	stack->value = value;
	stack->id = 0;
	stack->swap = -1;
	stack->rotate = -1;
	stack->rotate_reverse = -1;
	return (stack);
}
