/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo_3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:26:36 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/11 12:19:14 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo_ps_3(t_list **lst, int min, int max)
{
	if ((*lst)->value == min)
	{
		ft_push_swap_sa(lst);
		ft_push_swap_ra(lst);
	}
	else if ((*lst)->next && (*lst)->next->value == min)
	{
		if ((*lst)->value == max)
			ft_push_swap_ra(lst);
		else
			ft_push_swap_sa(lst);
	}
	else if ((*lst)->next->next && (*lst)->next->next->value == min)
	{
		if ((*lst)->value == max)
		{
			ft_push_swap_ra(lst);
			ft_push_swap_sa(lst);
		}
		else
			ft_push_swap_rra(lst);
	}
}
