/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_info.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:50:56 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 21:22:53 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_binfo(t_info *info)
{
	info->stack_a = NULL;
	info->stack_b = NULL;
	info->size_a = 0;
	info->size_b = 0;
	info->max_a = 0;
	info->min_a = 0;
	info->med_a = 0;
	info->max_b = 0;
	info->min_b = 0;
	info->med_b = 0;
}

t_info	*ft_init_info(t_stack *stack_a, t_stack *stack_b)
{
	t_info	*info;

	info = NULL;
	ft_binfo(info);
	info->stack_a = stack_a;
	info->stack_b = stack_b;
	info->size_a = ft_stacksize(stack_a);
	info->size_b = ft_stacksize(stack_b);
	info->max_a = algo_max(info->stack_a);
	info->min_a = algo_min(info->stack_a);
	info->med_a = algo_med(info->stack_a, info);
	info->max_b = algo_max(info->stack_b);
	info->min_b = algo_min(info->stack_b);
	info->med_b = algo_med(info->stack_b, info);
	return (info);
}
