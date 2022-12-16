/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_push_swap_algo_5.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:26:36 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/16 13:52:26 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algo_ps_5(t_info *info)
{
	int		push;

	if (info->stack_a[0]->value == info->max_a)
		rra(&info);
	push = (info->size_a / 2);
	while (push)
	{
		if (info->stack_a[0]->value == info->min_a)
		{
			pb(&info);
			info = ft_update_info(info);
			push--;
		}
		else
			ra(&info);
	}
	info = ft_update_info(info);
	ft_print_info(info);
	if (info->size_a == 3)
		ft_algo_ps_3(info);
	else if (info->stack_a[0]->value > info->stack_a[0]->next->value)
		sa(&info);
	push = info->size_b + 1;
	while (--push)
		pa(&info);
}
