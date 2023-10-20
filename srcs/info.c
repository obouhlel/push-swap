/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:41:21 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 22:44:59 by obouhlel         ###   ########.fr       */
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

/**
 * Updates the information in the given t_info
 * struct based on the given integer array.
 * @param info - the t_info struct to update
 * @param tab - the integer array to use for updating the information
 * @param size - the size of the integer array
 */
static
void	update_info_bis(t_info *info, int *tab, int size)
{
	info->size = size;
	info->min = min(tab, size);
	info->max = max(tab, size);
	info->med = tab[size / 2];
}

/**
 * @brief Updates the information about the stacks.
 * 
 * @param stack The stack to update the information for.
 */
void	update_info(t_stack *stack)
{
	update_info_bis(&stack->info_a, stack->a, stack->info_a.size);
	update_info_bis(&stack->info_b, stack->b, stack->info_b.size);
}
