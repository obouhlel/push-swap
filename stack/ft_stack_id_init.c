/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_id_init.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:38:23 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/16 14:38:57 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_stack_id_init(t_stack *stack)
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
