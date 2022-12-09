/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:43:30 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/09 17:32:39 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	int		size;
	t_list	*tmp_lst;
	t_list	*next;

	if (!(*lst1))
		return ;
	next = NULL;
	tmp_lst = NULL;
	size = ft_lstsize(*lst1);
	tmp = (*lst1)->value;
	if (size > 1)
		next = (*lst1)->next;
	ft_lstdelone(*lst1, &delete_value);
	tmp_lst = ft_lstnew(tmp);
	if (!tmp_lst)
	{
		free_all_lst(lst1, lst2);
		ft_putendl_fd("Error", 1);
		exit(0);
	}
	ft_lstadd_front(lst2, tmp_lst);
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
