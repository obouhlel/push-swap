/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_algo_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:51:53 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/22 13:26:40 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algo_5(t_info *info)
{
	int		push;

	push = 2;
	if (info->stack_a->value == info->max_a)
		rra(info->stack_a);
	while (push)
	{
		if (info->stack_a->value == info->min_a)
		{
			pb(info);
			ft_update_info(info);
			push--;
		}
		else
			ra(info->stack_a);
	}
	ft_update_info(info);
	if (info->size_a == 3)
		ft_algo_3(info);
	else if (info->stack_a->value > info->stack_a->next->value)
		sa(info->stack_a);
	push = 3;
	while (--push)
		pa(info);
}
