/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   31_algo_n_info_combot.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:24:06 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/24 13:10:51 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_best_price_move(int *price)
{
	int			min;
	int			i;

	min = price[0];
	i = 0;
	while (i < 4)
	{
		if (min > price[i])
			min = price[i];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (min == price[i])
			return (i);
		i++;
	}
	return (-1);
}

static void	ft_calcule_start(int move, int id_a, int id_b, t_info *info)
{
	if (move == RA_RB)
		ft_algo_info_ra_rb(id_a, id_b, info);
	else if (move == RRA_RRB)
		ft_algo_info_rra_rrb(id_a, id_b, info);
	else if (move == RRA_RB)
		ft_algo_info_rra_rb(id_a, id_b, info);
	else if (move == RA_RRB)
		ft_algo_info_ra_rrb(id_a, id_b, info);
}

static void	ft_calcule_better(int *price, int id_a, int id_b, t_info *info)
{
	const int	move = ft_best_price_move(price);

	if (move == RA_RB)
		if (price[move] < (info->ra + info->rb))
			ft_algo_info_ra_rb(id_a, id_b, info);
	if (move == RRA_RRB)
		if (price[move] < (info->rra + info->rrb))
			ft_algo_info_rra_rrb(id_a, id_b, info);
	if (move == RRA_RB)
		if (price[move] < (info->rra + info->rb))
			ft_algo_info_rra_rb(id_a, id_b, info);
	if (move == RA_RRB)
		if (price[move] < (info->ra + info->rrb))
			ft_algo_info_ra_rrb(id_a, id_b, info);
}

void	ft_calcule_best_combot(int id_a, int id_b, t_info *info)
{
	static int	start = 0;
	int			price[4];
	int			move;

	price[RA_RB] = id_a + id_b;
	price[RRA_RRB] = (info->size_a - id_a) + (info->size_b - id_b);
	price[RRA_RB] = (info->size_a - id_a) + id_b;
	price[RA_RRB] = id_a + (info->size_b - id_b);
	move = ft_best_price_move(price);
	if (start == 0)
	{
		ft_calcule_start(move, id_a, id_b, info);
		start++;
	}
	else if (start)
		ft_calcule_better(price, id_a, id_b, info);
	if (id_b == (info->size_b - 1))
		start = 0;
}
