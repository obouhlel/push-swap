/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:01:56 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/09 18:16:11 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_algo_moyenne(t_list *lst)
{
	int	total;

	total = 0;
	while (lst)
	{
		total += lst->value;
		lst = lst->next;
	}
	total /= 2;
	total++;
	return (total);
}

void	ft_algo_push_swap(t_list **lst_a, t_list **lst_b)
{
	int	size_a;
	int	size_b;
	int	moyenne;

	(void)size_a;
	(void)size_b;
	moyenne = ft_algo_moyenne(*lst_a);
	if (moyenne < (*lst_a)->value)
		ft_push_swap_pa(lst_b, lst_a);
	else
		ft_push_swap_sa(lst_a);
	free_all_lst(lst_a, lst_b);
}
