/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:50:56 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/16 12:00:38 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_info	*ft_init_info(t_stack **stack_a, t_stack **stack_b)
{
	t_info	*info;

	info = (t_info *)malloc(sizeof(t_info));
	if (!info)
	{
		free_all_stack(stack_a, stack_b);
		ft_putendl_fd("Error", 1);
		exit(0);
	}
	info->stack_a = stack_a;
	info->stack_b = stack_b;
	info->size_a = ft_stacksize(stack_a[0]);
	info->max_a = algo_max(info->stack_a[0]);
	info->min_a = algo_min(info->stack_a[0]);
	info->med_a = algo_med(info->stack_a[0], info);
	info->size_b = ft_stacksize(stack_b[0]);
	info->max_b = algo_max(info->stack_b[0]);
	info->min_b = algo_min(info->stack_b[0]);
	info->med_b = algo_med(info->stack_b[0], info);
	return (info);
}

t_info	*ft_update_info(t_info *info)
{
	info->size_a = ft_stacksize(info->stack_a[0]);
	info->max_a = algo_max(info->stack_a[0]);
	info->min_a = algo_min(info->stack_a[0]);
	info->med_a = algo_med(info->stack_a[0], info);
	info->size_b = ft_stacksize(info->stack_b[0]);
	info->max_b = algo_max(info->stack_b[0]);
	info->min_b = algo_min(info->stack_b[0]);
	info->med_b = algo_med(info->stack_b[0], info);
	return (info);
}

void	ft_print_info(t_info *info)
{
	ft_printstack_color(info->stack_a[0], info->stack_b[0]);
	ft_putstr_fd("\nSTACK A :\n", 1);
	ft_putstrnbr_fd("size a = ", info->size_a, 1);
	ft_putstrnbr_fd("max a = ", info->max_a, 1);
	ft_putstrnbr_fd("min a = ", info->min_a, 1);
	ft_putstrnbr_fd("med a = ", info->med_a, 1);
	ft_putstr_fd("\nSTACK B :\n", 1);
	ft_putstrnbr_fd("size b = ", info->size_b, 1);
	ft_putstrnbr_fd("max b = ", info->max_b, 1);
	ft_putstrnbr_fd("min b = ", info->min_b, 1);
	ft_putstrnbr_fd("med b = ", info->med_b, 1);
}
