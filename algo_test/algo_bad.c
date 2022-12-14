/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_bad.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:03:15 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/14 09:23:38 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_algo_min(t_list *stack)
{
	int	min;

	min = stack->value;
	while (stack)
	{
		if (min > stack->value)
			min = stack->value;
		stack = stack->next;
	}
	return (min);
}

void	ft_algo_push_swap(t_list **stack_a, t_list **stack_b)
{
	int	size_a;
	int	size_b;
	int	i;
	int	min;

	size_a = ft_lstsize(*stack_a);
	while (size_a)
	{
		min = ft_algo_min(*stack_a);
		i = 0;
		while (i < size_a)
		{
			if (min == (*stack_a)->value)
			{
				ft_push_swap_pa(stack_a, stack_b);
				size_a--;
			}
			else
				ft_push_swap_ra(stack_a);
			i++;
		}
	}
	size_b = ft_lstsize(*stack_b);
	i = 0;
	while (i < size_b)
	{
		ft_push_swap_pb(stack_a, stack_b);
		i++;
	}
	ft_lstprint_num_fd(*stack_a, 1);
	if (ft_push_swap_check(*stack_a))
		free_all_stack(stack_a, stack_b);
}
