/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:58:31 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/03 14:59:57 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//to add in front the list
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		(*lst) = new;
		return ;
	}
	new->next = (*lst);
	(*lst) = new;
}
