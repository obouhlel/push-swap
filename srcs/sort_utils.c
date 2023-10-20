/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:43:31 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 11:12:20 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#define RA 0
#define RRA 1

void	sort_algo_5_bis(t_data *data)
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
		if (data->a[0].pos == i)
		{
			pb(data, TRUE);
			if (get_i_pos(++i, data->a, data->size_a) < \
				data->size_a / 2)
				mode = RA;
			else
				mode = RRA;
		}
		else if (mode == RA)
			ra(data, TRUE);
		else
			rra(data, TRUE);
	}
}

void	sort_with_mediane(t_data *data)
{
	while (data->size_a != 3)
	{
		if (data->info_a.med.val <= data->a[0].val)
		{
			pb(data, TRUE);
			if (data->info_a.med.val == data->b[0].val)
				data->info_a = init_info(data->a, data->size_a, data);
		}
		else
			rra(data, TRUE);
	}
}
