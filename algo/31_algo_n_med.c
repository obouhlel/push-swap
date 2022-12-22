/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   31_algo_n_med.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 12:38:39 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/22 16:01:08 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algo_n_med(t_info *info)
{
	while (info->size_a > 3)
	{
		if (info->med_a < info->stack_a->value)
			pb(info);
		else if (info->stack_a->value == info->med_a)
		{
			pb(info);
			info->med_a = ft_med(info->stack_a, info);
		}
		else
			ra(info->stack_a);
		info->size_a = ft_stack_size(info->stack_a);
	}
	ft_update_info(info);
	ft_algo_3(info);
	if (!ft_stack_pos_init(info->stack_a, info->stack_b))
	{
		free_info(info);
		ft_putendl_fd("Error", 1);
		exit(0);
	}
}
