/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:01:56 by obouhlel          #+#    #+#             */
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

int	ft_algo_max(t_list *stack)
{
	int	max;

	max = stack->value;
	while (stack)
	{
		if (max < stack->value)
			max = stack->value;
		stack = stack->next;
	}
	return (max);
}

void	ft_algo_ps_3(t_list **stack_a, int min, int max)
{
	if ((*stack_a)->value == min)
	{
		ft_push_swap_ra(stack_a);
		ft_push_swap_ra(stack_a);
		ft_push_swap_sa(stack_a);
	}
	else if ((*stack_a)->next && (*stack_a)->next->value == min)
	{
		if ((*stack_a)->value == max)
			ft_push_swap_ra(stack_a);
		else
			ft_push_swap_sa(stack_a);
	}
	else if ((*stack_a)->next->next && (*stack_a)->next->next->value == min)
	{
		if ((*stack_a)->value == max)
		{
			ft_push_swap_ra(stack_a);
			ft_push_swap_sa(stack_a);
		}
		else
			ft_push_swap_rra(stack_a);
	}
}

void	ft_algo_push_swap(t_list **stack_a, t_list **stack_b)
{
	int	size_a;
	int	min;
	int	max;

	min = ft_algo_min(*stack_a);
	max = ft_algo_max(*stack_a);
	if (ft_push_swap_check(*stack_a))
	{
		ft_lstprint_num_fd(*stack_a, 1);
		free_all_stack(stack_a, stack_b);
		return ;
	}
	size_a = ft_lstsize(*stack_a);
	if (size_a <= 3)
		ft_algo_ps_3(stack_a, min, max);
	ft_lstprint_num_fd(*stack_a, 1);
	if (ft_push_swap_check(*stack_a))
		free_all_stack(stack_a, stack_b);
}
