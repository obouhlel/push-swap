/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:43:30 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/04 11:34:42 by obouhlel         ###   ########.fr       */
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

	ft_lstadd_front(lst2, (*lst1));
	tmp_lst = (*lst1)->next;
	ft_lstdelone_relink(lst1);
	(*lst1) = tmp_lst;
	return ;
}

//swap the first one to the last
void	swap_to_the_top(t_list **lst)
{
	t_list	*swap;
	int		tmp;

	swap = (*lst);
	swap = ft_lstlast(swap);
	tmp = (*lst)->content;
	(*lst)->content = swap->content;
	swap->content = tmp;
	swap = (*lst);
	while (swap && swap->next->next)
	{
		tmp = swap->content;
		swap->content = swap->next->content;
		swap->next->content = tmp;
		swap = swap->next;
	}
}

//swap the first one to the last
void	swap_to_the_bot(t_list **lst)
{
	t_list	*swap;
	int		tmp;

	swap = (*lst);
	swap = ft_lstlast(swap);
	tmp = (*lst)->content;
	(*lst)->content = swap->content;
	swap->content = tmp;
	while (swap && swap->previous->previous)
	{
		tmp = swap->content;
		swap->content = swap->previous->content;
		swap->previous->content = tmp;
		swap = swap->previous;
	}
}
