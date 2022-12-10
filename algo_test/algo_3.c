/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3_not_working.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:01:56 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/10 14:00:27 by obouhlel         ###   ########.fr       */
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

int	ft_algo_max(t_list *lst)
{
	int	max;

	max = lst->value;
	while (lst)
	{
		if (max < lst->value)
			max = lst->value;
		lst = lst->next;
	}
	return (max);
}

void	ft_algo_ps_3(t_list **lst_a, int min, int max)
{
	if ((*lst_a)->value == min)
	{
		ft_push_swap_ra(lst_a);
		ft_push_swap_ra(lst_a);
		ft_push_swap_sa(lst_a);
	}
	else if ((*lst_a)->next && (*lst_a)->next->value == min)
	{
		if ((*lst_a)->value == max)
			ft_push_swap_ra(lst_a);
		else
			ft_push_swap_sa(lst_a);
	}
	else if ((*lst_a)->next->next && (*lst_a)->next->next->value == min)
	{
		if ((*lst_a)->value == max)
		{
			ft_push_swap_ra(lst_a);
			ft_push_swap_sa(lst_a);
		}
		else
			ft_push_swap_rra(lst_a);
	}
}

void	ft_algo_push_swap(t_list **lst_a, t_list **lst_b)
{
	int	size_a;
	int	min;
	int	max;

	min = ft_algo_min(*lst_a);
	max = ft_algo_max(*lst_a);
	if (ft_push_swap_check(*lst_a))
	{
		ft_lstprint_num_fd(*lst_a, 1);
		free_all_lst(lst_a, lst_b);
		return ;
	}
	size_a = ft_lstsize(*lst_a);
	if (size_a <= 3)
		ft_algo_ps_3(lst_a, min, max);
	ft_lstprint_num_fd(*lst_a, 1);
	if (ft_push_swap_check(*lst_a))
		free_all_lst(lst_a, lst_b);
}
