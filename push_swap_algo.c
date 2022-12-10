/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:01:56 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/10 14:36:37 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo_push_swap(t_list **lst_a, t_list **lst_b)
{
	int	size_a;
	int	min;
	int	max;

	min = ft_algo_min(*lst_a);
	max = ft_algo_max(*lst_a);
	if (ft_push_swap_check(*lst_a))
	{
		free_all_lst(lst_a, lst_b);
		return ;
	}
	size_a = ft_lstsize(*lst_a);
	if (size_a <= 3)
		ft_algo_ps_3(lst_a, min, max);
	if (ft_push_swap_check(*lst_a))
		free_all_lst(lst_a, lst_b);
}
