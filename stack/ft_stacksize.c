/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacksize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:09:11 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 15:09:35 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//to get the list size
int	ft_stacksize(t_stack *stack)
{
	int		size;

	size = 0;
	if (!stack)
		return (size);
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}
