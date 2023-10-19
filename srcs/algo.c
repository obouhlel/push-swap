/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:22:59 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/18 20:55:21 by obouhlel         ###   ########.fr       */
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
		if (data->a[i].position != i)
			return (FALSE);
		i++;
	}
	return (TRUE);
}

static
void	sort_size_3(t_data *data)
{
	if (data->a[0].value == data->info_a.min)
	{
		if (data->a[1].value == data->info_a.max)
		{
			sa(data->a, data->size_a);
			ra(data->a, data->size_a);
		}
	}
	else if (data->a[0].value == data->info_a.med)
	{
		if (data->a[1].value == data->info_a.min)
			sa(data->a, data->size_a);
		else
			rra(data->a, data->size_a);
	}
	else
	{
		if (data->a[1].value == data->info_a.min)
			ra(data->a, data->size_a);
		else
		{
			sa(data->a, data->size_a);
			rra(data->a, data->size_a);
		}
	}
}

static
void	sort_size_5(t_data *data)
{
	push_to_b_5(data);
	data->info_a = init_info(data->a, data->size_a, data);
	sort_size_3(data);
	while (data->size_b != 0)
		pa(data->a, data->b, &data->size_a, &data->size_b);
}

static
void	sort_size_n(t_data *data)
{
	push_to_b_n(data, &data->size_a);
	data->info_a = init_info(data->a, data->size_a, data);
	data->info_b = init_info(data->b, data->size_b, data);
	sort_size_3(data);
	ft_putendl("STACK A:");
	print_stack(data->a, data->size_a);
	ft_putendl("STACK B:");
	print_stack(data->b, data->size_b);
}

int	algo(t_data *data)
{
	if (is_sorted(data) == TRUE)
		return (EXIT_SUCCESS);
	if (data->size == 2)
		sa(data->a, data->size_a);
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
