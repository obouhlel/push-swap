/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:58:41 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/06 17:01:00 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//to delete one list
void	ft_lstdelone(t_list *lst, void (*del)(int))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
