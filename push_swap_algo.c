/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:01:56 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/09 17:39:49 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo_push_swap(t_list **lst_a, t_list **lst_b)
{
	int	size_a;
	int	size_b;

	size_a = ft_lstsize(*lst_a);
	while (size_a)
	{
		ft_push_swap_pa(lst_b, lst_a);
		size_a--;
	}
	size_b = ft_lstsize(*lst_b);
	while (size_b)
	{
		ft_push_swap_pb(lst_a, lst_b);
		size_b--;
	}
	free_all_lst(lst_a, lst_b);
}
