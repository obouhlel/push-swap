/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_algo_n_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:28:46 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/19 16:36:26 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_do_move_rr_rrr(t_info *info)
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
}

void	ft_do_move(t_info *info)
{
	ft_do_move_rr_rrr(info);
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
