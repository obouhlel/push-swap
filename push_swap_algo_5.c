/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo_5.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:26:36 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/14 15:45:34 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo_ps_5(t_list **stack_a, t_list **stack_b, int min, int max)
{
	int		push;
	int		size_a;

	if ((*stack_a)->value == max)
		ft_push_swap_rra(stack_a);
	push = (ft_lstsize(*stack_a) / 2);
	while (push)
	{
		if ((*stack_a)->value == min)
		{
			ft_push_swap_pb(stack_a, stack_b);
			min = algo_min(*stack_a);
			push--;
		}
		else
			ft_push_swap_ra(stack_a);
	}
	size_a = ft_lstsize(*stack_a);
	if (size_a == 3)
		ft_algo_ps_3(stack_a, min, max);
	else if ((*stack_a)->value > (*stack_a)->next->value)
		ft_push_swap_sa(stack_a);
	push = ft_lstsize(*stack_b) + 1;
	while (--push)
		ft_push_swap_pa(stack_a, stack_b);
}
