/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:22:59 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/18 17:47:16 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static
int	is_sorted(t_data *data)
{
	int	i;

	if (data->size_b != 0)
		return (FALSE);
	i = 0;
	while (i < data->size_a)
	{
		if (data->stack_a[i].position != i)
			return (FALSE);
		i++;
	}
	return (TRUE);
}

static
void	sort_size_3(t_data *data)
{
	if (data->stack_a[0].value == data->info_a.min)
	{
		if (data->stack_a[1].value == data->info_a.max)
		{
			sa(data->stack_a, data->size_a);
			ra(data->stack_a, data->size_a);
		}
	}
	else if (data->stack_a[0].value == data->info_a.median)
	{
		if (data->stack_a[1].value == data->info_a.min)
			sa(data->stack_a, data->size_a);
		else
			rra(data->stack_a, data->size_a);
	}
	else
	{
		if (data->stack_a[1].value == data->info_a.min)
			ra(data->stack_a, data->size_a);
		else
		{
			sa(data->stack_a, data->size_a);
			rra(data->stack_a, data->size_a);
		}
	}
}

static
void	sort_size_5(t_data *data)
{
	push_to_b_5(data);
	data->info_a = init_info(data->stack_a, data->size_a, data);
	sort_size_3(data);
	while (data->size_b != 0)
		pa(data->stack_a, data->stack_b, &data->size_a, &data->size_b);
}

static
void	sort_size_n(t_data *data)
{
	(void)data;
}

int	algo(t_data *data)
{
	if (is_sorted(data) == TRUE)
		return (EXIT_SUCCESS);
	if (data->size == 2)
		sa(data->stack_a, data->size_a);
	else if (data->size <= 3)
		sort_size_3(data);
	else if (data->size <= 5)
		sort_size_5(data);
	else
		sort_size_n(data);
	if (is_sorted(data) == TRUE)
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
