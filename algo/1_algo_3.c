/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_algo_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:40:49 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/23 17:59:49 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algo_3(t_info *info)
{
	if (info->stack_a->value == info->min_a)
	{
		sa(info->stack_a);
		ra(info->stack_a);
	}
	else if (info->stack_a->next->value == info->min_a)
	{
		if (info->stack_a->value == info->max_a)
			ra(info->stack_a);
		else
			sa(info->stack_a);
	}
	else if (info->stack_a->next->next->value == info->min_a)
	{
		if (info->stack_a->value == info->max_a)
		{
			sa(info->stack_a);
			rra(info->stack_a);
		}
		else
			rra(info->stack_a);
	}
}
