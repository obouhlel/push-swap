/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_push_swap_algo_5.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:26:36 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 20:58:15 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algo_ps_5(t_info *info)
{
	int		push;

	if (info->stack_a->value == info->max_a)
		rra(info->stack_a);
	push = (info->size_a / 2);
	while (push)
	{
		if (info->stack_a->value == info->min_a)
		{
			pb(info->stack_a, info->stack_b);
			info = ft_init_info(info->stack_a, info->stack_b);
			push--;
		}
		else
			ra(info->stack_a);
	}
	info = ft_init_info(info->stack_a, info->stack_b);
	if (info->size_a == 3)
		ft_algo_ps_3(info);
	else if (info->stack_a->value > info->stack_a->next->value)
		sa(info->stack_a);
	push = info->size_b + 1;
	while (--push)
		pa(info->stack_a, info->stack_b);
}
