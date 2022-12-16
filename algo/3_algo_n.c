/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_algo_n.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:02:19 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/16 21:03:54 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algo_n(t_info *info)
{
	ft_algo_lis(info);
	ft_update_info(info);
	ft_price_calculate_all_price(info);
	ft_best_price_cost(info->stack_a, info->stack_b);
	ft_print_info(info);
}
