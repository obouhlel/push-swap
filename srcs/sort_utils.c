/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:43:31 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 14:44:34 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#define RA 0
#define RRA 1

int	found_index(int value, int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

void	sort_algo_5_bis(t_stack *stack)
{
	int	i;
	int	mode;

	i = 0;
	if (found_index(1, stack->a, stack->info_a.size) < \
		stack->info_a.size / 2)
		mode = RA;
	else
		mode = RRA;
	while (i < 2)
	{
		if (stack->a[0] == i + 1)
		{
			pb(stack, TRUE);
			if (found_index(++i + 1, stack->a, stack->info_a.size) < \
				stack->info_a.size / 2)
				mode = RA;
			else
				mode = RRA;
		}
		else if (mode == RA)
			ra(stack, TRUE);
		else
			rra(stack, TRUE);
	}
}

void	sort_with_mediane(t_stack *stack)
{
	while (stack->info_a.size != 3)
	{
		if (stack->info_a.med <= stack->a[0])
		{
			pb(stack, TRUE);
			if (stack->info_a.med == stack->b[0])
				update_info(stack);
		}
		else
			rra(stack, TRUE);
	}
}
