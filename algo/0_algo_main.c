/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_algo_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:55:14 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/24 10:54:39 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algo_push_swap(t_stack *stack_a, t_stack *stack_b)
{
	t_info	*info;

	info = ft_init_info(stack_a, stack_b);
	if (ft_push_swap_check(info->stack_a))
	{
		free_info(info);
		return ;
	}
	if (info->size_a == 1)
		free_info(info);
	else if (info->size_a == 2)
		sa(info->stack_a);
	else if (info->size_a == 3)
		ft_algo_3(info);
	else if (info->size_a <= 5)
		ft_algo_5(info);
	else
		ft_algo_n(info);
	free_info(info);
}
