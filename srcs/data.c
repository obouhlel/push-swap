/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:36:56 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/19 13:07:05 by obouhlel         ###   ########.fr       */
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

int	found_pos(int *sorted_tab, int val, int size)
{
	static int	*tab = NULL;
	int			i;

	if (sorted_tab != NULL && tab == NULL)
		tab = sorted_tab;
	i = 0;
	while (i < size)
	{
		if (tab[i] == val)
			return (i);
		i++;
	}
	return (-1);
}

int	init_data(t_data *data, int *tab, int nb_nbrs)
{
	int	i;

	data->a = ft_calloc(nb_nbrs, sizeof(t_stack));
	if (!data->a)
		return (EXIT_FAILURE);
	data->b = ft_calloc(nb_nbrs, sizeof(t_stack));
	if (!data->b)
		return (EXIT_FAILURE);
	data->size_a = nb_nbrs;
	data->size_b = 0;
	data->sorted_tab = bubble_sort(tab, nb_nbrs);
	if (!data->sorted_tab)
		return (EXIT_FAILURE);
	i = 0;
	while (i < nb_nbrs)
	{
		data->a[i].val = tab[i];
		data->a[i].pos = found_pos(data->sorted_tab, tab[i], nb_nbrs);
		i++;
	}
	data->size = nb_nbrs;
	data->info_a = init_info(data->a, data->size_a, data);
	data->info_b = (t_info){.min = {0}, .max = {0}, .med = {0}};
	return (free(tab), EXIT_SUCCESS);
}

void	destroy_data(t_data *data)
{
	if (data->sorted_tab)
		ft_free((void **)&data->sorted_tab);
	if (data->a)
		ft_free((void **)&data->a);
	if (data->b)
		ft_free((void **)&data->b);
	ft_bzero(data, sizeof(t_data));
}
