/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:49:07 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/14 09:20:33 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	ft_algo_ps_100_bis(t_list **stack_a, t_list **stack_b, int min, int max)
// {
//	 
// }

void	ft_algo_ps_100(t_list **stack_a, t_list **stack_b, int min, int max)
{
	int		push;

	(void)max;
	push = ft_lstsize(*stack_a) - 1;
	while (push)
	{
		if ((*stack_a)->value == min)
		{
			ft_push_swap_pb(stack_b, stack_a);
			min = ft_algo_min(*stack_a);
			push--;
		}
		else
			ft_push_swap_ra(stack_a);
	}
	push = ft_lstsize(*stack_b);
	while (push)
	{
		ft_push_swap_pa(stack_b, stack_a);
		push--;
	}
}