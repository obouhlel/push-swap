/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:43:31 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/18 17:47:08 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#define RA 0
#define RRA 1

int	get_index_with_position(int pos, t_stack *stack, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (stack[i].position == pos)
			return (i);
		i++;
	}
	return (-1);
}

void	push_to_b_5(t_data *data)
{
	int	i;
	int	mode;

	i = 0;
	if (get_index_with_position(0, data->stack_a, data->size_a) < \
		data->size_a / 2)
		mode = RA;
	else
		mode = RRA;
	while (i < 2)
	{
		if (data->stack_a[0].position == i)
		{
			pb(data->stack_a, data->stack_b, &data->size_a, &data->size_b);
			if (get_index_with_position(++i, data->stack_a, data->size_a) < \
				data->size_a / 2)
				mode = RA;
			else
				mode = RRA;
		}
		else if (mode == RA)
			ra(data->stack_a, data->size_a);
		else
			rra(data->stack_a, data->size_a);
	}
}
