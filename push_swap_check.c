/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:14:08 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/14 09:19:46 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push_swap_check(t_list *stack)
{
	if (!stack)
		return (0);
	while (stack)
	{
		if (stack->next && stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}
