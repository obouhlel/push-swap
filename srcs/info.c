/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:41:21 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 23:46:32 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * Finds the minimum value in an integer array.
 *
 * @param tab The integer array to search.
 * @param size The size of the integer array.
 * @return The minimum value in the integer array.
 */
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

/**
 * Finds the maximum value in an integer array.
 * 
 * @param tab The integer array to search.
 * @param size The size of the integer array.
 * @return The maximum value in the integer array.
 */
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
int	update_info_bis(t_info *info, int *tab, int size, bool mode)
{
	int	sorted_tab[MAX_VALUE];

	info->size = size;
	info->min = min(tab, size);
	info->max = max(tab, size);
	if (mode == MEDIAN)
	{
		ft_bzero(sorted_tab, MAX_VALUE);
		bubble_sort(tab, size, sorted_tab);
		info->med = sorted_tab[size / 2];
	}
	else
		info->med = -1;
	return (EXIT_SUCCESS);
}

void	update_info(t_stack *stack, bool mode)
{
	if (update_info_bis(&stack->info_a, stack->a, stack->info_a.size, mode))
		return (destroy_stack(stack), ft_putendl_err("Error"),
			exit(ERROR_NUMBER));
	if (update_info_bis(&stack->info_b, stack->b, stack->info_b.size, mode))
		return (destroy_stack(stack), ft_putendl_err("Error"),
			exit(ERROR_NUMBER));
}
