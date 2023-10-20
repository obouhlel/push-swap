/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:22:59 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 10:56:02 by obouhlel         ###   ########.fr       */
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
		if (data->a[i].pos != i)
			return (FALSE);
		i++;
	}
	return (TRUE);
}

static
void	sort_size_3(t_data *data)
{
	if (data->a[0].val == data->info_a.min.val)
	{
		if (data->a[1].val == data->info_a.max.val)
		{
			sa(data, TRUE);
			ra(data, TRUE);
		}
	}
	else if (data->a[0].val == data->info_a.med.val)
	{
		if (data->a[1].val == data->info_a.min.val)
			sa(data, TRUE);
		else
			rra(data, TRUE);
	}
	else
	{
		if (data->a[1].val == data->info_a.min.val)
			ra(data, TRUE);
		else
		{
			sa(data, TRUE);
			rra(data, TRUE);
		}
	}
}

static
void	sort_size_5(t_data *data)
{
	sort_algo_5_bis(data);
	data->info_a = init_info(data->a, data->size_a, data);
	sort_size_3(data);
	while (data->size_b != 0)
		pa(data, TRUE);
}

static
void	sort_size_n(t_data *data)
{
	sort_with_mediane(data, &data->size_a);
	data->info_a = init_info(data->a, data->size_a, data);
	data->info_b = init_info(data->b, data->size_b, data);
	sort_size_3(data);
	ft_putendl("Stack A:");
	print_stack(data->a, data->size_a);
	ft_putendl("Stack B:");
	print_stack(data->b, data->size_b);
}

int	sort(t_data *data)
{
	if (is_sorted(data) == TRUE)
		return (EXIT_SUCCESS);
	if (data->size == 2)
		sa(data, TRUE);
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
