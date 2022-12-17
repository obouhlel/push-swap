/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_algo_n.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:02:19 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/17 17:59:06 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algo_n(t_info *info)
{
	ft_algo_lis(info);
	// if (info->stack_b->pos == 0)
	// 	pa(info);
	// if (info->stack_b->pos)
	ft_update_info(info);
	ft_print_info(info);
	int	pos = ft_algo_find_next_pos(3, info->stack_b);
	ft_putstrnbr_fd("pos next = ", pos, 1);
}
