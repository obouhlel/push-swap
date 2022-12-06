/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:43:30 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/06 19:46:02 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	delete(int a)
{
	(void)a;
	a = 0;
}

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

//swap the first one on 1 pile go to the 2nd in the top
void	swap_top_1_to_2(t_list **lst1, t_list **lst2)
{
	t_list	*tmp_lst;

	if (!(*lst1) || !(*lst2))
		return ;
	ft_lstadd_front(lst2, (*lst1));
	tmp_lst = (*lst1)->next;
	ft_lstdelone((*lst1), &delete);
	(*lst1) = tmp_lst;
}

//all go top and the first go at the last
void	swap_to_the_top(t_list **lst)
{
	t_list	*swap;
	int		tmp;

	swap = NULL;
	if (!(*lst))
		return ;
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

//all go bot and the last go to the top
void	swap_to_the_bot(t_list **lst)
{
	t_list	*swap;
	int		tmp;

	swap = NULL;
	if (!(*lst))
		return ;
	// swap = (*lst);
	// swap = ft_lstlast(swap);
	// tmp = (*lst)->content;
	// (*lst)->content = swap->content;
	// swap->content = tmp;
	swap = (*lst);
	while (swap)
	{
		tmp = swap->content;
		swap->content = swap->previous->content;
		swap->previous->content = tmp;
		// swap = swap->previous;
	}
}
