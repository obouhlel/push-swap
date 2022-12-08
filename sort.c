/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:43:30 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/08 11:01:18 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void	delete(int a)
// {
// 	(void)a;
// 	a = 0;
// }

//swap the first and the second on the top
void	swap_of_2_top(t_list **lst)
{
	int	tmp;

	if (!(*lst) && !(*lst)->next)
		return ;
	tmp = (*lst)->value;
	(*lst)->value = (*lst)->next->value;
	(*lst)->next->value = tmp;
}

//swap the first one on 1 pile go to the 2nd in the top
void	swap_top_1_to_2(t_list **lst1, t_list **lst2)
{
	int		tmp;
	t_list	*next;

	if (!(*lst1))
		return ;
	tmp = (*lst1)->value;
	next = (*lst1)->next;
	ft_lstdelone_relink(lst1);
	ft_lstadd_front(lst2, ft_lstnew(tmp));
	(*lst1) = next;
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
	while (swap->next)
	{
		tmp = swap->value;
		swap->value = swap->next->value;
		swap->next->value = tmp;
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
	swap = (*lst);
	swap = ft_lstlast(swap);
	while (swap->previous)
	{
		tmp = swap->value;
		swap->value = swap->previous->value;
		swap->previous->value = tmp;
		swap = swap->previous;
	}
}
