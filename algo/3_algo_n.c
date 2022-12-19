/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_algo_n.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:02:19 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/19 16:01:43 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_info_combot(t_info *info, int id_a, int id_b, int move)
{
	if (move == RA_RB)
	{
		info->ra = id_a;
		info->rb = id_b;
		info->rra = -1;
		info->rrb = -1;
	}
	else if (move == RRA_RRB)
	{
		info->rra = (info->size_a - id_a);
		info->rrb = (info->size_b - id_b);
		info->ra = -1;
		info->rb = -1;
	}
	else if (move == RRA_RB)
	{
		info->rra = (info->size_a - id_a);
		info->rb = id_b;
		info->ra = -1;
		info->rrb = -1;
	}
	else if (move == RA_RRB)
	{
		info->ra = id_a;
		info->rrb = (info->size_b - id_b);
		info->rra = -1;
		info->rb = -1;
	}
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

void	ft_calcule_best_combot(int id_a, int id_b, t_info *info)
{
	int	price[4];
	int	move;

	price[RA_RB] = id_a + id_b;
	price[RRA_RRB] = (info->size_a - id_a) + (info->size_b - id_b);
	price[RRA_RB] = (info->size_a - id_a) + id_b;
	price[RA_RRB] = id_a + (info->size_b - id_b);
	move = ft_best_price_move(price);
	if (price[move] == 0)
		ft_info_combot(info, id_a, id_b, move);
	if (price[move] < (info->ra + info->rra + info->rb + info->rrb))
		ft_info_combot(info, id_a, id_b, move);
}

void	ft_algo_n_price(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	int	id_a;
	int	id_b;
	int	i;
}

void	ft_do_move(t_info *info)
{
	while (info->ra > 0 && info->rb > 0)
	{
		rr(info->stack_a, info->stack_b);
		info->ra--;
		info->rb--;
	}
	while (info->rra > 0 && info->rrb > 0)
	{
		rrr(info->stack_a, info->stack_b);
		info->rra--;
		info->rrb--;
	}
	while (info->ra > 0)
	{
		ra(info->stack_a);
		info->ra--;
	}
	while (info->rb > 0)
	{
		rb(info->stack_b);
		info->rb--;
	}
	while (info->rra > 0)
	{
		rra(info->stack_a);
		info->rra--;
	}
	while (info->rrb > 0)
	{
		rrb(info->stack_b);
		info->rrb--;
	}
	pa(info);
}

void	ft_algo_n(t_info *info)
{
	ft_algo_lis(info);
	ft_update_info(info);
	while (info->size_b - 1)
	{
		ft_init_move_info(info);
		ft_algo_n_price(info->stack_a, info->stack_b, info);
		ft_do_move(info);
		ft_init_move_info(info);
		ft_update_info(info);
	}
	pa(info);
	ft_print_info(info);
}
