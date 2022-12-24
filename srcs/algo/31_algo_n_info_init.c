/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   31_algo_n_info_init.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 13:02:46 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/24 13:13:52 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_algo_info_ra_rb(int id_a, int id_b, t_info *info)
{
	info->ra = id_a;
	info->rb = id_b;
	info->rra = -1;
	info->rrb = -1;
}

void	ft_algo_info_rra_rrb(int id_a, int id_b, t_info *info)
{
	info->rra = (info->size_a - id_a);
	info->rrb = (info->size_b - id_b);
	info->ra = -1;
	info->rb = -1;
}

void	ft_algo_info_rra_rb(int id_a, int id_b, t_info *info)
{
	info->rra = (info->size_a - id_a);
	info->rb = id_b;
	info->ra = -1;
	info->rrb = -1;
}

void	ft_algo_info_ra_rrb(int id_a, int id_b, t_info *info)
{
	info->ra = id_a;
	info->rrb = (info->size_b - id_b);
	info->rra = -1;
	info->rb = -1;
}
