/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_init_id.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:08:17 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 15:08:21 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_stack_init_id(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack->id = i;
		stack = stack->next;
		i++;
	}
}
