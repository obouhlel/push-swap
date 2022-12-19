/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_algo_n.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:02:19 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/19 14:33:21 by obouhlel         ###   ########.fr       */
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

void	ft_calcule_best_combot(int id_a, int id_b, t_info *info)
{
	int	price[4];
	int	move;

	move = -1;
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

int	ft_pos_is_in_a(int pos, t_stack *stack)
{
	while (stack)
	{
		if (pos == stack->pos)
			return(1);
		stack = stack->next;
	}
	return (0);
}

void	ft_algo_n_price(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	int	id_a;
	int	id_b;
	int	i;
	int	j;

	i = 0;
	while (i < info->size)
	{
		id_a = ft_algo_find_pos(i, stack_a);
		j = i;
		while (id_a == -1 && j < info->size)
		{
			id_a = ft_algo_find_next_pos(j, stack_a);
			j++;
		}
		if (j >= info->size)
			break ;
		id_b = ft_algo_find_pos(i, stack_b);
		j = i;
		while (id_b == -1 && j < info->size)
		{
			id_b = ft_algo_find_next_pos(j, stack_b);
			j++;
		}
		if (j >= info->size)
			break ;
		ft_calcule_best_combot(id_a, id_b, info);
		i++;
	}
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
	ft_print_info(info);
	while (info->size_b)
	{
		ft_price_calculate_all_price(info);
		ft_init_move_info(info);
		ft_algo_n_price(info->stack_a, info->stack_b, info);
		ft_do_move(info);
		ft_update_info(info);
		ft_print_info(info);
	}
}
