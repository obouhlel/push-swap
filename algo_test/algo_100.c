/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:49:07 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/12 13:26:31 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	ft_algo_ps_100_bis(t_list **lst_a, t_list **lst_b, int min, int max)
// {
//	 
// }

void	ft_algo_ps_100(t_list **lst_a, t_list **lst_b, int min, int max)
{
	int		push;

	(void)max;
	push = ft_lstsize(*lst_a) - 1;
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
	push = ft_lstsize(*lst_b);
	while (push)
	{
		ft_push_swap_pa(lst_b, lst_a);
		push--;
	}
}