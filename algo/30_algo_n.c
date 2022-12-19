/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   30_algo_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:02:19 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/19 16:47:39 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// void	ft_algo_n_price(t_stack *stack_a, t_stack *stack_b, t_info *info)
// {
// 	int	id_a;
// 	int	id_b;
// }

void	ft_algo_n(t_info *info)
{
	ft_algo_lis(info);
	ft_update_info(info);
	while (info->size_b - 1)
	{
		ft_init_move_info(info);
		ft_do_move(info);
		ft_init_move_info(info);
		ft_update_info(info);
	}
	pa(info);
	ft_print_info(info);
}
