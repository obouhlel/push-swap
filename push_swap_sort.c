/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:43:30 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/14 09:23:23 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//swap the first and the second on the top
void	swap_of_2_top(t_list **stack)
{
	int	tmp;

	if (!(*stack) && !(*stack)->next)
		return ;
	tmp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = tmp;
}

//swap the first one on 1 pile go to the 2nd in the top
void	swap_top_1_to_2(t_list **stack1, t_list **stack2)
{
	int		tmp;
	int		size;
	t_list	*tmp_stack;
	t_list	*next;

	if (!(*stack1))
		return ;
	next = NULL;
	tmp_stack = NULL;
	size = ft_lstsize(*stack1);
	tmp = (*stack1)->value;
	if (size > 1)
		next = (*stack1)->next;
	ft_lstdelone(*stack1, &delete_value);
	tmp_stack = ft_lstnew(tmp);
	if (!tmp_stack)
	{
		free_all_stack(stack1, stack2);
		ft_putendl_fd("Error", 1);
		exit(0);
	}
	ft_lstadd_front(stack2, tmp_stack);
	(*stack1) = next;
}

//all go top and the first go at the last
void	swap_to_the_top(t_list **stack)
{
	t_list	*swap;
	int		tmp;

	swap = NULL;
	if (!(*stack))
		return ;
	swap = (*stack);
	while (swap->next)
	{
		tmp = swap->value;
		swap->value = swap->next->value;
		swap->next->value = tmp;
		swap = swap->next;
	}
}

//all go bot and the last go to the top
void	swap_to_the_bot(t_list **stack)
{
	t_list	*swap;
	int		tmp;

	swap = NULL;
	if (!(*stack))
		return ;
	swap = (*stack);
	swap = ft_lstlast(swap);
	while (swap->previous)
	{
		tmp = swap->value;
		swap->value = swap->previous->value;
		swap->previous->value = tmp;
		swap = swap->previous;
	}
}
