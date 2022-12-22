/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   31_algo_n_med.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 12:38:39 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/22 13:34:08 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algo_n_med(t_info *info)
{
	int	i;

	i = 0;
	while (i < info->size)
	{
		if (info->med_a < info->stack_a->value)
			pb(info);
		else if (info->stack_a->value == info->med_a)
		{
			pb(info);
			info->med_a = ft_med(info->stack_a, info);
		}
		else if (info->med_a > info->stack_a->value)
			ra(info->stack_a);
		i++;
	}
	ft_update_info(info);
}
