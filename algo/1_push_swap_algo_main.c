/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:01:56 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 17:10:56 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo_push_swap(t_stack **stack_a, t_stack **stack_b)
{
	t_info	*info;

	info->stack_a = stack_a;
	info->stack_b = stack_b;
	if (ft_push_swap_check(*stack_a))
	{
		free_all_stack(stack_a, stack_b);
		return ;
	}
	info->size_a = ft_stacksize(*stack_a);
	info->size_b = ft_stacksize(*stack_b);
	if (info->stack_a)
}
