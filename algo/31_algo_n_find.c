/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   31_algo_n_find.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 21:30:26 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/19 16:48:08 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//don't touch
int	ft_algo_find_id(int value, t_stack *stack)
{
	int	id;

	id = 0;
	while (stack)
	{
		if (value == stack->value)
		{
			id = stack->id;
			return (id);
		}
		stack = stack->next;
	}
	return (-1);
}

int	ft_algo_find_pos(int pos, t_stack *stack)
{
	while (stack)
	{
		if (pos == stack->pos)
			return (stack->id);
		stack = stack->next;
	}
	return (-1);
}

int	ft_algo_find_next_pos(int pos, t_stack *stack)
{
	pos++;
	while (stack)
	{
		if (pos == stack->pos)
			return (stack->id);
		stack = stack->next;
	}
	return (-1);
}
