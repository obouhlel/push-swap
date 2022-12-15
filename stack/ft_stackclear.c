/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:08:27 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 19:26:42 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//to clear the all list
void	ft_stackclear(t_stack *stack, void (*del)(int))
{
	t_stack	*tmp;

	if (!stack || !del)
		return ;
	while (stack)
	{
		tmp = stack->next;
		ft_stackdelone(stack, del);
		stack = tmp;
	}
}
