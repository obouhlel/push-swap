/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:41:21 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 12:24:48 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static
int	min(int *tab, int size)
{
	int	min;
	int	i;

	min = tab[0];
	i = 0;
	while (i < size)
	{
		if (tab[i] < min)
			min = tab[i];
		i++;
	}
	return (min);
}

static
int	max(int *tab, int size)
{
	int	max;
	int	i;

	max = tab[0];
	i = 0;
	while (i < size)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

static
void	update_info_bis(t_info *info, int *tab, int size)
{
	info->size = size;
	info->min = min(tab, size);
	info->max = max(tab, size);
	info->med = tab[size / 2];
}

void	update_info(t_stack *stack)
{
	update_info_bis(&stack->info_a, stack->a, stack->info_a.size);
	update_info_bis(&stack->info_b, stack->b, stack->info_b.size);
}
