/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:04:35 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/08 11:01:18 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//to iter one list
void	ft_lstiter(t_list *lst, int (*f)(int))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->value);
		lst = lst->next;
	}
}
