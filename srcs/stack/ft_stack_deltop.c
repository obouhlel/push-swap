/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_deltop.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:21:58 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/24 12:40:27 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	*ft_stack_to_tab(t_stack *stack, int *tab)
{
	int	i;

	i = 0;
	stack = stack->next;
	while (stack)
	{
		tab[i] = stack->value;
		stack = stack->next;
		i++;
	}
	return (tab);
}

static t_stack	*ft_create_new_stack(t_stack *stack, int *tab, int size)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	while (i < size)
	{
		tmp = ft_stack_new(tab[i]);
		if (!tmp)
		{
			ft_stack_clear(stack);
			return (FAIL);
		}
		ft_stack_add_back(&stack, tmp);
		i++;
	}
	free(tab);
	return (stack);
}

t_stack	*ft_stack_deltop(t_stack *stack)
{
	t_stack	*new_stack;
	int		size;
	int		*tab;

	new_stack = NULL;
	tab = NULL;
	size = 0;
	size = ft_stack_size(stack);
	tab = (int *)malloc((size - 1) * sizeof(int));
	if (!tab)
		return (FAIL);
	tab = ft_stack_to_tab(stack, tab);
	ft_stack_clear(stack);
	new_stack = ft_create_new_stack(new_stack, tab, (size - 1));
	return (new_stack);
}
