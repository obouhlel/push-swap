/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pos_init.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:21:36 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/17 16:33:27 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	*ft_stack_to_tab(t_stack *stack_a, t_stack *stack_b, int size)
{
	int	i;
	int *tab;

	tab = (int *)malloc(sizeof(int) * (size));
	if (!tab)
		return (NULL);
	i = 0;
	while (stack_a)
	{
		tab[i] = stack_a->value;
		stack_a = stack_a->next;
		i++;
	}
	while (stack_b)
	{
		tab[i] = stack_b->value;
		stack_b = stack_b->next;
		i++;
	}
	return (tab);
}

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

static void	ft_pos_set(t_stack *stack, int id, int i)
{
	while (id)
	{
		stack = stack->next;
		id--;
	}
	stack->pos = i;
}

void	*ft_stack_pos_init(t_stack *stack_a, t_stack *stack_b)
{
	const int	size = ft_stack_size(stack_a) + ft_stack_size(stack_b);
	int			*tab;
	int			i;
	int			id;

	tab = ft_stack_to_tab(stack_a, stack_b, size);
	if (!tab)
		return (NULL);
	tab = algo_tri(tab, size);
	i = 0;
	while (i < size)
	{
		if ((id = ft_algo_find_id(tab[i], stack_a)) != -1)
			ft_pos_set(stack_a, id, (i + 1));
		else if ((id = ft_algo_find_id(tab[i], stack_b)) != -1)
			ft_pos_set(stack_b, id, (i + 1));
		i++;
	}
	free(tab);
	return (OK);
}
