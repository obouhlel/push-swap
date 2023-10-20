/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:31:50 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 10:32:17 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_int(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	found_pos(int *sorted_tab, int val, int size)
{
	static int	*tab = NULL;
	int			i;

	if (sorted_tab != NULL && tab == NULL)
		tab = sorted_tab;
	i = 0;
	while (i < size)
	{
		if (tab[i] == val)
			return (i);
		i++;
	}
	return (-1);
}
