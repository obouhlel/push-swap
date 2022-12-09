/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:14:08 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/09 09:48:37 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push_swap_check(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst)
	{
		if (lst->next != NULL)
			if (lst->value > lst->next->value)
				return (0);
		lst = lst->next;
	}
	return (1);
}
