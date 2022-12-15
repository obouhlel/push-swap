/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo_lis.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:10:44 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 15:02:40 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_algo_lis_c(t_stack *stack_a)
{
	int	tmp;
	int	lis_c;

	tmp = stack_a->value;
	lis_c = 0;
	while (stack_a)
	{
		if (tmp < stack_a->value)
		{
			tmp = stack_a->value;
			lis_c++;
		}
		stack_a = stack_a->next;
	}
	return (lis_c);
}

static int	ft_algo_lis_d(t_stack *stack_a)
{
	int	tmp;
	int	lis_d;

	tmp = stack_a->value;
	lis_d = 0;
	while (stack_a)
	{
		if (tmp > stack_a->value)
		{
			tmp = stack_a->value;
			lis_d++;
		}
		stack_a = stack_a->next;
	}
	return (lis_d);
}

static void	ft_algo_lis_do_c(t_stack **stack_a, t_stack **stack_b)
{
	int	size_a;
	int	tmp;
	int	i;

	size_a = ft_stacksize(*stack_a);
	tmp = (*stack_a)->value;
	i = 0;
	while (i < size_a)
	{
		if ((*stack_a)->value == algo_max(*stack_a))
		{
			ft_push_swap_pb(stack_a, stack_b);
		}
		else if (tmp < (*stack_a)->value)
		{
			tmp = (*stack_a)->value;
			ft_push_swap_ra(stack_a);
		}
		else
			ft_push_swap_pb(stack_a, stack_b);
		i++;
	}
}

static void	ft_algo_lis_do_d(t_stack **stack_a, t_stack **stack_b)
{
	int	size_a;
	int	tmp;
	int	i;

	size_a = ft_stacksize(*stack_a);
	tmp = (*stack_a)->value;
	i = 0;
	while (i < size_a)
	{
		if (tmp > (*stack_a)->value)
		{
			tmp = (*stack_a)->value;
			ft_push_swap_ra(stack_a);
		}
		else
			ft_push_swap_pb(stack_a, stack_b);
		i++;
	}
}

void	ft_algo_lis(t_stack **stack_a, t_stack **stack_b)
{
	int	lis_c;
	int	lis_d;

	lis_c = ft_algo_lis_c(*stack_a);
	lis_d = ft_algo_lis_d(*stack_a);
	if (lis_c >= lis_d)
		ft_algo_lis_do_c(stack_a, stack_b);
	else if (lis_d <= 3)
	{
		ft_algo_lis_do_d(stack_a, stack_b);
		if (ft_stacksize(*stack_a) == 3)
			ft_algo_ps_3(stack_a, algo_min(*stack_a), algo_max(*stack_a));
		else if (ft_stacksize(*stack_a) == 2)
			if ((*stack_a)->value > (*stack_a)->next->value)
				ft_push_swap_sa(stack_a);
	}
	else
		ft_algo_lis_do_c(stack_a, stack_b);
}
