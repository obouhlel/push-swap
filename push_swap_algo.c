/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:01:56 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/09 11:59:15 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo_push_swap(t_list **lst_a, t_list **lst_b)
{
	int	len;
	int	split_len;
	int	i;

	len = ft_lstsize((*lst_a));
	if (ft_push_swap_check((*lst_a)))
	{
		ft_putendl_fd("SUCCESS", 1);
		return ;
	}
	split_len = len / 5;
	i = -1;
	while (++i < split_len)
		ft_push_swap_pa(lst_b, lst_a);
}
