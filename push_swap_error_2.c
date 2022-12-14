/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_error_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:29:46 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/14 09:22:18 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	delete_value(int a)
{
	(void)a;
	a = 0;
}

void	free_nbrs_stack(char **nbrs, t_list **stack)
{
	int	i;

	i = 0;
	while (nbrs[i])
		free(nbrs[i++]);
	free(nbrs);
	if (stack)
		ft_lstclear(stack, &delete_value);
}

void	free_all_stack(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a)
		ft_lstclear(stack_a, &delete_value);
	if (*stack_b)
		ft_lstclear(stack_b, &delete_value);
}

void	ft_create_stack_a(t_list **stack, char **nbrs, int n)
{
	int		i;
	t_list	*atoi;

	i = 0;
	atoi = NULL;
	while (i < n)
	{
		atoi = ft_lstnew(ft_atoi(nbrs[i]));
		if (!atoi)
		{
			free_nbrs_stack(nbrs, stack);
			ft_putendl_fd("Error", 1);
			exit(0);
		}
		ft_lstadd_front(stack, atoi);
		i++;
	}
}
