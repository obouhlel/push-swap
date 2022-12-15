/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo_calcule.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:36:17 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 17:17:40 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	algo_min(t_stack *stack)
{
	int	min;

	min = stack->value;
	while (stack)
	{
		if (min > stack->value)
			min = stack->value;
		stack = stack->next;
	}
	return (min);
}

int	algo_max(t_stack *stack)
{
	int	max;

	max = stack->value;
	while (stack)
	{
		if (max < stack->value)
			max = stack->value;
		stack = stack->next;
	}
	return (max);
}

int	*algo_tri(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

int	algo_med(t_stack *stack, t_stack **stack_a, t_stack **stack_b)
{
	int			med;
	int			*tab;
	int			i;
	const int	size = ft_stacksize(stack);

	tab = (int *)malloc(size * sizeof(int));
	if (!tab)
	{
		free_all_stack(stack_a, stack_b);
		ft_putendl_fd("Error", 1);
		exit(0);
	}
	i = 0;
	while (stack)
	{
		tab[i] = stack->value;
		stack = stack->next;
		i++;
	}
	tab = algo_tri(tab, size);
	med = tab[size / 2];
	free(tab);
	return (med);
}