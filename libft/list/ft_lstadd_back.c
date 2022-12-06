/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:57:24 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/03 14:59:57 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//we take the last list, and we add the new list
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if (!lst)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	tmp = ft_lstlast(tmp);
	tmp->next = new;
}
