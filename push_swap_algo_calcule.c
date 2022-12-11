/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo_calcule.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:36:17 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/11 12:16:56 by obouhlel         ###   ########.fr       */
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

ssize_t	ft_algo_moy(t_list *lst)
{
	ssize_t	moy;
	int		size;

	size = ft_lstsize(lst);
	while (lst)
	{
		moy += lst->value;
		lst = lst->next;
	}
	moy /= size;
	return (moy);
}
