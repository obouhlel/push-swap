/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:36:56 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 20:15:02 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static
void	swap_int(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static
int	found_pos(int *sorted_tab, int val, int size)
{
	int			i;

	i = 0;
	while (i < size)
	{
		if (sorted_tab[i] == val)
			return (i + 1);
		i++;
	}
	return (-1);
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

int	init_stack(t_stack *stack, int *tab, int nb_nbrs)
{
	int	i;
	int	*sorted_tab;

	stack->a = ft_calloc(nb_nbrs, sizeof(t_stack));
	if (!stack->a)
		return (EXIT_FAILURE);
	stack->b = ft_calloc(nb_nbrs, sizeof(t_stack));
	if (!stack->b)
		return (EXIT_FAILURE);
	sorted_tab = bubble_sort(tab, nb_nbrs);
	if (!sorted_tab)
		return (EXIT_FAILURE);
	i = -1;
	while (++i < nb_nbrs)
		stack->a[i] = found_pos(sorted_tab, tab[i], nb_nbrs);
	stack->info = (t_info){.size = nb_nbrs, .min = 1, .max = nb_nbrs,
		.med = sorted_tab[nb_nbrs / 2]};
	stack->info_a = (t_info){.size = nb_nbrs, .min = 1, .max = nb_nbrs,
		.med = sorted_tab[nb_nbrs / 2]};
	stack->info_b = (t_info){.size = 0, .min = 0, .max = 0, .med = 0};
	return (free(tab), free(sorted_tab), EXIT_SUCCESS);
}

void	destroy_stack(t_stack *stack)
{
	if (stack->a)
		ft_free((void **)&stack->a);
	if (stack->b)
		ft_free((void **)&stack->b);
	ft_bzero(stack, sizeof(t_stack));
}
