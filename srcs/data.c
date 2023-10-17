/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:36:56 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/17 20:27:46 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_int(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static int	*bubble_sort(int *tab, int size)
{
	int	*new_tab;
	int	i;
	int	j;

	new_tab = ft_calloc(size, sizeof(int));
	if (!new_tab)
		return (NULL);
	i = -1;
	while (++i < size)
		new_tab[i] = tab[i];
	i = 0;
	while (i < size - 1)
	{
		j = size - 1;
		while (j > i)
		{
			if (new_tab[j] < new_tab[j - 1])
				swap_int(&new_tab[j], &new_tab[j - 1]);
			j--;
		}
		i++;
	}
	return (new_tab);
}

int	found_position(int *sorted_tab, int value, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (sorted_tab[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

int	init_data(t_data *data)
{
	int	i;

	data->stack_a = ft_calloc(data->nb_nbrs, sizeof(t_stack));
	if (!data->stack_a)
		return (EXIT_FAILURE);
	data->stack_b = NULL;
	data->size_a = data->nb_nbrs;
	data->size_b = 0;
	data->sorted_tab = bubble_sort(data->tab, data->nb_nbrs);
	if (!data->sorted_tab)
		return (EXIT_FAILURE);
	i = 0;
	while (i < data->nb_nbrs)
	{
		data->stack_a[i].value = data->tab[i];
		data->stack_a[i].index = i;
		data->stack_a[i].position = found_position(data->sorted_tab,
				data->tab[i], data->nb_nbrs);
		i++;
	}
	return (EXIT_SUCCESS);
}

void	destroy_data(t_data *data)
{
	if (data->tab)
		ft_free((void **)&data->tab);
	if (data->sorted_tab)
		ft_free((void **)&data->sorted_tab);
	if (data->stack_a)
		ft_free((void **)&data->stack_a);
	if (data->stack_b)
		ft_free((void **)&data->stack_b);
}
