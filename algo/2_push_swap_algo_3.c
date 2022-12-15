/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_push_swap_algo_3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:26:36 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 20:20:12 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algo_ps_3(t_info *info)
{
	if (info->stack_a->value == info->min_a)
	{
		sa(info->stack_a);
		ra(info->stack_a);
	}
	else if (info->stack_a->next && info->stack_a->next->value == info->min_a)
	{
		if (info->stack_a->value == info->max_a)
			ra(info->stack_a);
		else
			sa(info->stack_a);
	}
	else if (info->stack_a->next->next && \
			info->stack_a->next->next->value == info->min_a)
	{
		if (info->stack_a->value == info->max_a)
		{
			ra(info->stack_a);
			sa(info->stack_a);
		}
		else
			rra(info->stack_a);
	}
}
