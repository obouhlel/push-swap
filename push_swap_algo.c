/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:01:56 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/14 16:37:55 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo_push_swap(t_list **stack_a, t_list **stack_b)
{
	int	size_a;

	if (ft_push_swap_check(*stack_a))
	{
		free_all_stack(stack_a, stack_b);
		return ;
	}
	size_a = ft_lstsize(*stack_a);
	if (size_a == 2)
		ft_push_swap_sa(stack_a);
	else if (size_a == 3)
		ft_algo_ps_3(stack_a, algo_min(*stack_a), algo_max(*stack_a));
	else if (size_a <= 5)
		ft_algo_ps_5(stack_a, stack_b, algo_min(*stack_a), algo_max(*stack_a));
	else
		ft_algo_ps_n(stack_a, stack_b);
	// ft_print_color(*stack_a, *stack_b);
	if (ft_push_swap_check(*stack_a))
		free_all_stack(stack_a, stack_b);
	else
		free_all_stack(stack_a, stack_b);
}
