/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackdelone_relink.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:08:34 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 19:27:16 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_stackdelone_relink(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack->previous;
	stack->previous = stack->next;
	stack->next = tmp;
	free(stack);
}
