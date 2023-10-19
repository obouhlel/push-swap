/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:36:56 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/18 20:46:39 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_int(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static
int	*bubble_sort(int *tab, int size)
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

static
int	found_position(int *sorted_tab, int value, int size)
{
	int			i;

	i = 0;
	while (i < size)
	{
		if (sorted_tab[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

int	init_data(t_data *data, int *tab, int nb_nbrs)
{
	int	i;
	int	*sorted_tab;

	data->a = ft_calloc(nb_nbrs, sizeof(t_stack));
	if (!data->a)
		return (EXIT_FAILURE);
	data->b = ft_calloc(nb_nbrs, sizeof(t_stack));
	if (!data->b)
		return (EXIT_FAILURE);
	data->size_a = nb_nbrs;
	data->size_b = 0;
	sorted_tab = bubble_sort(tab, nb_nbrs);
	if (!sorted_tab)
		return (EXIT_FAILURE);
	i = 0;
	while (i < nb_nbrs)
	{
		data->a[i].value = tab[i];
		data->a[i].position = found_position(sorted_tab, tab[i], nb_nbrs);
		i++;
	}
	data->size = nb_nbrs;
	data->info_a = init_info(data->a, data->size_a, data);
	data->info_b = (t_info){.min = 0, .max = 0, .med = 0};
	return (free(tab), free(sorted_tab), EXIT_SUCCESS);
}

void	destroy_data(t_data *data)
{
	if (data->a)
		ft_free((void **)&data->a);
	if (data->b)
		ft_free((void **)&data->b);
}
