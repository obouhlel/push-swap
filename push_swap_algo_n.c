/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo_n.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:49:07 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/14 18:10:19 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo_ps_n(t_list **stack_a, t_list **stack_b)
{
	int	push;

	// ft_algo_lis(stack_a, stack_b);
	ft_algo_med(stack_a, stack_b);
	push = ft_lstsize(*stack_b) + 1;
	while (--push)
		ft_push_swap_pa(stack_a, stack_b);
}
