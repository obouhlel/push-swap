/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:01:56 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/14 09:21:09 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo_push_swap(t_list **stack_a, t_list **stack_b)
{
	int	size_a;
	int	min;
	int	max;
	// int	med;

	if (ft_push_swap_check(*stack_a))
	{
		free_all_stack(stack_a, stack_b);
		return ;
	}
	min = ft_algo_min(*stack_a);
	max = ft_algo_max(*stack_a);
	size_a = ft_lstsize(*stack_a);
	if (size_a == 2)
		ft_push_swap_sa(stack_a);
	else if (size_a == 3)
		ft_algo_ps_3(stack_a, min, max);
	else if (size_a <= 5)
		ft_algo_ps_5(stack_a, stack_b, min, max);
	// else
	// 	ft_algo_ps_100(stack_a, stack_b);
	if (ft_push_swap_check(*stack_a))
		free_all_stack(stack_a, stack_b);
	else
		free_all_stack(stack_a, stack_b);
}
