/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_algo_calcule.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:04:32 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/24 12:40:27 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	*algo_tri(int *tab, int size)
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

int	ft_min(t_stack *stack)
{
	int	min;

	if (!stack)
		return (0);
	min = stack->value;
	while (stack)
	{
		if (min > stack->value)
			min = stack->value;
		stack = stack->next;
	}
	return (min);
}

int	ft_max(t_stack *stack)
{
	int	max;

	if (!stack)
		return (0);
	max = stack->value;
	while (stack)
	{
		if (max < stack->value)
			max = stack->value;
		stack = stack->next;
	}
	return (max);
}

int	ft_med(t_stack *stack, t_info *info)
{
	int			med;
	int			*tab;
	int			i;
	const int	size = ft_stack_size(stack);

	if (!stack)
		return (0);
	tab = (int *)malloc(size * sizeof(int));
	if (!tab)
	{
		free_info(info);
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
