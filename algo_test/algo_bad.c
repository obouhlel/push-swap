/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_bad.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:03:15 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/10 12:03:25 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_algo_min(t_list *lst)
{
	int	min;

	min = lst->value;
	while (lst)
	{
		if (min > lst->value)
			min = lst->value;
		lst = lst->next;
	}
	return (min);
}

void	ft_algo_push_swap(t_list **lst_a, t_list **lst_b)
{
	int	size_a;
	int	size_b;
	int	i;
	int	min;

	size_a = ft_lstsize(*lst_a);
	while (size_a)
	{
		min = ft_algo_min(*lst_a);
		i = 0;
		while (i < size_a)
		{
			if (min == (*lst_a)->value)
			{
				ft_push_swap_pa(lst_a, lst_b);
				size_a--;
			}
			else
				ft_push_swap_ra(lst_a);
			i++;
		}
	}
	size_b = ft_lstsize(*lst_b);
	i = 0;
	while (i < size_b)
	{
		ft_push_swap_pb(lst_a, lst_b);
		i++;
	}
	ft_lstprint_num_fd(*lst_a, 1);
	if (ft_push_swap_check(*lst_a))
		free_all_lst(lst_a, lst_b);
}
