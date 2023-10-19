/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:43:31 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/18 20:54:02 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#define RA 0
#define RRA 1

int	get_i_pos(int pos, t_stack *stack, int size)
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
	if (get_i_pos(0, data->a, data->size_a) < \
		data->size_a / 2)
		mode = RA;
	else
		mode = RRA;
	while (i < 2)
	{
		if (data->a[0].position == i)
		{
			pb(data->a, data->b, &data->size_a, &data->size_b);
			if (get_i_pos(++i, data->a, data->size_a) < \
				data->size_a / 2)
				mode = RA;
			else
				mode = RRA;
		}
		else if (mode == RA)
			ra(data->a, data->size_a);
		else
			rra(data->a, data->size_a);
	}
}

void	push_to_b_n(t_data *data, int *size_a)
{
	int	mode;

	if (get_i_pos(data->info_a.med, data->a, *size_a) < *size_a / 2)
		mode = RA;
	else
		mode = RRA;
	while (*size_a != 3)
	{
		if (data->info_a.med <= data->a[0].value)
		{
			pb(data->a, data->b, &data->size_a, &data->size_b);
			if (data->info_a.med == data->b[0].value)
			{
				data->info_a = init_info(data->a, *size_a, data);
				if (get_i_pos(data->info_a.med, data->a, *size_a) < *size_a / 2)
					mode = RA;
				else
					mode = RRA;
			}
		}
		else if (mode == RA)
			ra(data->a, *size_a);
		else
			rra(data->a, *size_a);
	}
}
