/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo_3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:26:36 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 15:02:40 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo_ps_3(t_stack **stack, int min, int max)
{
	if ((*stack)->value == min)
	{
		ft_push_swap_sa(stack);
		ft_push_swap_ra(stack);
	}
	else if ((*stack)->next && (*stack)->next->value == min)
	{
		if ((*stack)->value == max)
			ft_push_swap_ra(stack);
		else
			ft_push_swap_sa(stack);
	}
	else if ((*stack)->next->next && (*stack)->next->next->value == min)
	{
		if ((*stack)->value == max)
		{
			ft_push_swap_ra(stack);
			ft_push_swap_sa(stack);
		}
		else
			ft_push_swap_rra(stack);
	}
}
