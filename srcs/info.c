/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:41:21 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/18 14:00:39 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static
int	found_min(t_stack *stack, int size)
{
	int	i;
	int	min;

	i = 0;
	min = stack[0].value;
	while (i < size)
	{
		if (stack[i].value < min)
			min = stack[i].value;
		i++;
	}
	return (min);
}

static
int	found_max(t_stack *stack, int size)
{
	int	i;
	int	max;

	i = 0;
	max = stack[0].value;
	while (i < size)
	{
		if (stack[i].value > max)
			max = stack[i].value;
		i++;
	}
	return (max);
}

static
int	found_med(t_stack *stack, int size, t_data *data)
{
	int	i;
	int	j;
	int	*tab;
	int	med;

	tab = ft_calloc(size, sizeof(int));
	if (!tab)
		return (destroy_data(data), exit(ERROR_MALLOC), EXIT_FAILURE);
	i = -1;
	while (++i < size)
		tab[i] = stack[i].value;
	i = -1;
	while (++i < size - 1)
	{
		j = size - 1;
		while (j > i)
		{
			if (tab[j] < tab[j - 1])
				swap_int(&tab[j], &tab[j - 1]);
			j--;
		}
	}
	med = tab[size / 2];
	return (free(tab), med);
}

t_info	init_info(t_stack *stack, int size, t_data *data)
{
	t_info	info;

	info.min = found_min(stack, size);
	info.max = found_max(stack, size);
	info.median = found_med(stack, size, data);
	return (info);
}
