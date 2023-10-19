/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:41:21 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/19 11:11:47 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_i_pos(int pos, t_stack *stack, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (stack[i].pos == pos)
			return (i);
		i++;
	}
	return (-1);
}

static
t_stack	found_min(t_stack *stack, int size)
{
	int		i;
	t_stack	min;

	i = 0;
	min.val = stack[0].val;
	while (i < size)
	{
		if (stack[i].val < min.val)
			min = stack[i];
		i++;
	}
	return (min);
}

static
t_stack	found_max(t_stack *stack, int size)
{
	int		i;
	t_stack	max;

	i = 0;
	max.val = stack[0].val;
	while (i < size)
	{
		if (stack[i].val > max.val)
			max = stack[i];
		i++;
	}
	return (max);
}

static
t_stack	found_med(t_stack *stack, int size, t_data *data)
{
	int		i;
	int		j;
	int		*tab;
	t_stack	med;

	tab = ft_calloc(size, sizeof(int));
	if (!tab)
		return (destroy_data(data), exit(ERROR_MALLOC), (t_stack){0, 0});
	i = -1;
	while (++i < size)
		tab[i] = stack[i].val;
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
	med.val = tab[size / 2];
	med.pos = found_pos(NULL, med.val, size);
	return (free(tab), med);
}

t_info	init_info(t_stack *stack, int size, t_data *data)
{
	t_info	info;

	info.min = found_min(stack, size);
	info.max = found_max(stack, size);
	info.med = found_med(stack, size, data);
	return (info);
}
