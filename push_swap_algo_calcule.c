/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo_calcule.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:36:17 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/12 19:05:49 by obouhlel         ###   ########.fr       */
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

int	*ft_algo_tri(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

int	ft_algo_med(t_list *lst, t_list **lst_a, t_list **lst_b)
{
	int			med;
	int			*tab;
	int			i;
	const int	size = ft_lstsize(lst);

	tab = (int *)malloc(size * sizeof(int));
	if (!tab)
	{
		free_all_lst(lst_a, lst_b);
		ft_putendl_fd("Error", 1);
		exit(0);
	}
	i = 0;
	while (lst)
	{
		tab[i] = lst->value;
		lst = lst->next;
		i++;
	}
	tab = ft_algo_tri(tab, size);
	med = tab[size / 2];
	free(tab);
	return (med);
}
