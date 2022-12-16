/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_deltop.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:21:58 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/16 17:23:53 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_stack_deltop(t_stack *stack)
{
	t_stack	*new_stack;

	new_stack = stack->next;
	new_stack->previous = NULL;
	ft_stack_delone(stack);
	return (new_stack);
}
