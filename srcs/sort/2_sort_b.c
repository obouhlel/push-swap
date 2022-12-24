/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_sort_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:15:22 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/24 12:40:27 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	ft_push_b(t_info *info)
{
	int		tmp;
	t_stack	*stack_tmp;

	stack_tmp = NULL;
	tmp = info->stack_b->value;
	stack_tmp = ft_stack_new(tmp);
	if (!stack_tmp)
	{
		free_info(info);
		ft_putendl_fd("Error", 1);
		exit(0);
	}
	ft_stack_add_front(&(info->stack_a), stack_tmp);
	info->stack_b = ft_stack_deltop(info->stack_b);
	if (info->stack_b == FAIL)
	{
		free_info(info);
		ft_putendl_fd("Error", 1);
		exit(0);
	}
}

void	pa(t_info *info)
{
	ft_push_b(info);
	ft_stack_id_init(info->stack_a);
	ft_stack_id_init(info->stack_b);
	if (ft_stack_pos_init(info->stack_a, info->stack_b) == FAIL)
	{
		free_info(info);
		ft_putendl_fd("Error", 1);
		exit(0);
	}
	ft_putendl_fd("pa", 1);
}

void	sb(t_stack *stack_b)
{
	ft_swap(stack_b);
	ft_stack_id_init(stack_b);
	ft_putendl_fd("sb", 1);
}

void	rb(t_stack *stack_b)
{
	ft_rotate(stack_b);
	ft_stack_id_init(stack_b);
	ft_putendl_fd("rb", 1);
}

void	rrb(t_stack *stack_b)
{
	ft_reverse_rotate(stack_b);
	ft_stack_id_init(stack_b);
	ft_putendl_fd("rrb", 1);
}
