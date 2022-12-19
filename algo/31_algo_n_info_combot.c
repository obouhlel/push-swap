/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   31_algo_n_info_combot.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:24:06 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/19 16:47:19 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_calcule_best_combot(int id_a, int id_b, t_info *info)
{
	int	price[4];
	int	move;

	price[RA_RB] = id_a + id_b;
	price[RRA_RRB] = (info->size_a - id_a) + (info->size_b - id_b);
	price[RRA_RB] = (info->size_a - id_a) + id_b;
	price[RA_RRB] = id_a + (info->size_b - id_b);
	move = ft_best_price_move(price);
	if (move == RA_RB && price[move] < (info->ra + info->rb))
		ft_algo_info_ra_rb(id_a, id_b, info);
	else if (move == RRA_RRB && price[move] < (info->rra + info->rrb))
		ft_algo_info_rra_rrb(id_a, id_b, info);
	else if (move == RRA_RB && price[move] < (info->rra + info->rb))
		ft_algo_info_rra_rb(id_a, id_b, info);
	else if (move == RA_RRB && price[move] < (info->ra + info->rrb))
		ft_algo_info_ra_rrb(id_a, id_b, info);
}

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
