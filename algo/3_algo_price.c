/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_algo_price.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:52:07 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/19 13:55:48 by obouhlel         ###   ########.fr       */
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

	tab[RA_RB] = ra_rb;
	tab[RRA_RRB] = rra_rrb;
	tab[RRA_RB] = rra_rb;
	tab[RA_RRB] = ra_rrb;
}

int	ft_best_price_cost(int *price)
{
	int	combot;

	combot = ft_best_price_move(price);
	if (combot == RA_RB)
		return (price[RA_RB]);
	else if (combot == RRA_RRB)
		return (price[RRA_RRB]);
	else if (combot == RRA_RB)
		return (price[RRA_RB]);
	else if (combot == RA_RRB)
		return (price[RA_RRB]);
	return (-1);
}

int	ft_best_price_move(int *price)
{
	int			min;
	int			i;

	min = price[0];
	i = 0;
	while (i < 4)
	{
		if (min > price[i])
			min = price[i];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (min == price[i])
			return (i);
		i++;
	}
	return (-1);
}
