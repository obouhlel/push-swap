/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo_med.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:10:44 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/14 18:15:11 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo_med(t_list **stack_a, t_list **stack_b)
{
	int	med;
	int	size;
	int	push;

	size = ft_lstsize(*stack_a);
	while (size > 3)
	{
		med = algo_med(*stack_a, stack_a, stack_b);
		size = ft_lstsize(*stack_a);
		// ft_putstrnbr_fd("med = ", med, 1);
		// ft_putstrnbr_fd("size = ", size, 1);
		push = (size / 2);
		while (push)
		{
			if ((*stack_a)->value >= med)
				ft_push_swap_ra(stack_a);
			else
			{
				ft_push_swap_pb(stack_a, stack_b);
				push--;
			}
		}
		// ft_print_color(*stack_a, *stack_b);
	}
	if (!ft_push_swap_check(*stack_a))
		ft_algo_ps_3(stack_a, algo_min(*stack_a), algo_max(*stack_a));
}
