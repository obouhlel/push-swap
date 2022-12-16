/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_push_swap_algo_3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:26:36 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/16 13:51:47 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algo_ps_3(t_info *info)
{
	if (info->stack_a[0]->value == info->min_a)
	{
		sa(&info);
		ra(&info);
	}
	else if (info->stack_a[0]->next && \
			info->stack_a[0]->next->value == info->min_a)
	{
		if (info->stack_a[0]->value == info->max_a)
			ra(&info);
		else
			sa(&info);
	}
	else if (info->stack_a[0]->next->next && \
			info->stack_a[0]->next->next->value == info->min_a)
	{
		if (info->stack_a[0]->value == info->max_a)
		{
			ra(&info);
			sa(&info);
		}
		else
			rra(&info);
	}
}
