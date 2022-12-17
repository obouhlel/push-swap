/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_algo_price.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:52:07 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/17 17:43:27 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_price_calcule(t_stack *stack, int size)
{
	while (stack)
	{
		stack->rotate = stack->id;
		stack->rotate_reverse = size - stack->id;
		stack = stack->next;
	}
}

void	ft_price_calculate_all_price(t_info *info)
{
	ft_price_calcule(info->stack_a, info->size_a);
	ft_price_calcule(info->stack_b, info->size_b);
}

void	ft_price_combo(t_stack *stack_a, t_stack *stack_b, int *tab)
{
	const int	ra_rb = stack_a->rotate + stack_b->rotate;
	const int	rra_rrb = stack_a->rotate_reverse + stack_b->rotate_reverse;
	const int	ra_rrb = stack_a->rotate + stack_b->rotate_reverse;
	const int	rra_rb = stack_a->rotate_reverse + stack_b->rotate;

	tab[0] = ra_rb;
	tab[1] = rra_rrb;
	tab[2] = rra_rb;
	tab[3] = ra_rrb;
}

int	ft_best_price_cost(t_stack *stack_a, t_stack *stack_b)
{
	int			min;
	int			tab[4];
	int			i;

	ft_price_combo(stack_a, stack_b, tab);
	min = tab[0];
	i = 0;
	while (i < 4)
	{
		if (min > tab[i])
			min = tab[i];
		i++;
	}
	return (min);
}

int	ft_best_price_move(t_stack *stack_a, t_stack *stack_b)
{
	int			min;
	int			tab[4];
	int			i;

	ft_price_combo(stack_a, stack_b, tab);
	min = tab[0];
	i = 0;
	while (i < 4)
	{
		if (min > tab[i])
			min = tab[i];
		i++;
	}
	return (i);
}
