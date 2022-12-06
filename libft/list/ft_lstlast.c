/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:14:37 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/06 19:40:38 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//to take the last list
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = NULL;
	if (!lst)
		return (NULL);
	while (lst && lst->next)
	{
		tmp = lst;
		lst = lst->next;
		lst->previous = tmp;
	}
	return (lst);
}
