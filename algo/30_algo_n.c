/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   30_algo_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:02:19 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/19 16:43:32 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
