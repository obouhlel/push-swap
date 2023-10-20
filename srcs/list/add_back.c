/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:20:15 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 10:40:21 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int	add_back(t_list **lst, char move[SIZE_MOVE])
{
	t_list	*new;
	t_list	*last;

	new = lst_new(move);
	if (!new)
		return (EXIT_FAILURE);
	if (!*lst)
	{
		*lst = new;
		return (EXIT_SUCCESS);
	}
	last = last_node(*lst);
	last->next = new;
	return (EXIT_SUCCESS);
}
