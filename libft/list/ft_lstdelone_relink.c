
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_relink.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 22:27:15 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/03 22:34:02 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstdelone_relink(t_list **lst)
{
	t_list	*tmp;

	tmp = (*lst)->previous;
	(*lst)->previous = (*lst)->next;
	(*lst)->next = tmp;
	free(*lst);
}
