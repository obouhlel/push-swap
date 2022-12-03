/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:43:30 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/03 22:51:37 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//swap the first and the second on the top
void	swap_of_2_top(t_list **lst)
{
	int	tmp;

	if (!(*lst) && !(*lst)->next)
		return ;
	tmp = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = tmp;
}

//swap the first one on 1 pile to the 2nd in the top
void	swap_top_1_to_2(t_list **lst1, t_list **lst2)
{
	t_list	*tmp_lst;

	ft_lstadd_front(lst2, (*lst1)->content);
	tmp_lst = (*lst1)->next;
	ft_lstdelone_relink(&lst1);
	(*lst1) = tmp_lst;
	return ;
}

//swap the first one to the last
void	swap_first_to_last(t_list **lst)
{
	t_list	*tmp;

	(*lst)->previous = 
}
