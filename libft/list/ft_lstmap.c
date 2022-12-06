/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:27:52 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/06 17:03:25 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//to map the all list, and if we have one error to erased all the list
t_list	*ft_lstmap(t_list *lst, int (*f)(int), void (*del)(int))
{
	t_list	*new;
	t_list	*tmp;

	new = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		ft_lstadd_back(&new, ft_lstnew(lst->content));
		if (!new)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		lst = lst->next;
	}
	tmp = new;
	while (tmp)
	{
		tmp->content = f(tmp->content);
		tmp = tmp->next;
	}
	return (new);
}
