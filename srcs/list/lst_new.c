/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:17:08 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 10:40:29 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "utils.h"

t_list	*lst_new(char move[SIZE_MOVE])
{
	t_list	*lst;
	int		i;

	lst = ft_calloc(1, sizeof(t_list));
	if (!lst)
		return (NULL);
	i = 0;
	while (i < SIZE_MOVE)
	{
		lst->move[i] = move[i];
		i++;
	}
	return (lst);
}
