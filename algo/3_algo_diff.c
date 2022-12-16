/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_algo_diff.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 21:30:26 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/16 21:37:18 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*ft_algo_value_min_id(int value, t_stack *stack_a)
{
	int	id;

	while (stack_a)
	{
		if (value > stack_a->value)
			id = stack_a->id;
		stack_a = stack_a->next;
	}
	return (id);
}

int	*ft_algo_value_max_id(int value, t_stack *stack_a)
{
	int	id;

	while (stack_a)
	{
		if (value > stack_a->value)
			id = stack_a->id;
		stack_a = stack_a->next;
	}
	return (id);
}
