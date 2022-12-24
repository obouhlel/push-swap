/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   30_algo_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:02:19 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/24 12:40:27 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_algo_n_price(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	int	id_a;
	int	id_b;
	int	i;

	while (stack_b)
	{
		id_b = stack_b->id;
		id_a = ft_algo_find_next_pos(stack_b->pos, stack_a);
		i = 1;
		while (id_a == -1 && (stack_b->pos + i) <= info->size)
		{
			id_a = ft_algo_find_pos(stack_b->pos + i, stack_a);
			i++;
		}
		if (id_a == -1)
			id_a = ft_algo_find_id(info->min_a, stack_a);
		ft_calcule_best_combot(id_a, id_b, info);
		stack_b = stack_b->next;
	}
}

void	ft_algo_n_sort(t_info *info)
{
	int	id_min;

	ft_init_move_info(info);
	id_min = ft_algo_find_id(info->min_a, info->stack_a);
	info->ra = id_min;
	info->rra = info->size_a - id_min;
	if (info->ra < info->rra)
	{
		while (info->ra)
		{
			ra(info->stack_a);
			info->ra--;
		}
	}
	else
	{
		while (info->rra)
		{
			rra(info->stack_a);
			info->rra--;
		}
	}
}

void	ft_algo_n(t_info *info)
{
	ft_algo_n_med(info);
	while (info->size_b)
	{
		ft_algo_n_price(info->stack_a, info->stack_b, info);
		ft_do_move(info);
		ft_init_move_info(info);
		ft_update_info(info);
	}
	ft_algo_n_sort(info);
}
