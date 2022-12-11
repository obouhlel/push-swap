/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo_5.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:26:36 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/11 12:39:05 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo_ps_5(t_list **lst_a, t_list **lst_b, int min, int max)
{
	int		push;
	int		size_a;

	push = (ft_lstsize(*lst_a) / 2);
	while (push)
	{
		if ((*lst_a)->value == min)
		{
			ft_push_swap_pb(lst_b, lst_a);
			min = ft_algo_min(*lst_a);
			push--;
		}
		else
			ft_push_swap_ra(lst_a);
	}
	size_a = ft_lstsize(*lst_a);
	if (size_a == 3)
		ft_algo_ps_3(lst_a, min, max);
	else if ((*lst_a)->value > (*lst_a)->next->value)
		ft_push_swap_sa(lst_a);
	push = ft_lstsize(*lst_b) + 1;
	while (--push)
		ft_push_swap_pa(lst_b, lst_a);
}
