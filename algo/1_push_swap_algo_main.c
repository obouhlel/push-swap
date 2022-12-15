/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_push_swap_algo_main.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:01:56 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 20:57:00 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algo_push_swap(t_stack *stack_a, t_stack *stack_b)
{
	t_info	*info;

	info = ft_init_info(stack_a, stack_b);
	if (ft_push_swap_check(stack_a))
	{
		free_all_stack(stack_a, stack_b);
		return ;
	}
	if (info->size_a == 1)
		free_all_stack(stack_a, stack_b);
	else if (info->size_a == 2)
		sa(info->stack_a);
	else if (info->size_a == 3)
		ft_algo_ps_3(info);
	else if (info->size_a <= 5)
		ft_algo_ps_5(info);
	else
		ft_algo_ps_n(info);
	if (ft_push_swap_check(info->stack_a))
		free_all_stack(stack_a, stack_b);
}
