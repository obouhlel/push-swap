/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_sort_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:12:29 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/19 15:07:42 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_push_a(t_info *info)
{
	int		tmp;
	t_stack	*stack_tmp;

	stack_tmp = NULL;
	tmp = info->stack_a->value;
	stack_tmp = ft_stack_new(tmp);
	if (!stack_tmp)
	{
		free_info(info);
		ft_putendl_fd("Error", 1);
		exit(0);
	}
	ft_stack_add_front(&(info->stack_b), stack_tmp);
	info->stack_a = ft_stack_deltop(info->stack_a);
	if (info->stack_a == FAIL)
	{
		free_info(info);
		ft_putendl_fd("Error", 1);
		exit(0);
	}
}

void	sa(t_stack *stack_a)
{
	ft_swap(stack_a);
	ft_stack_id_init(stack_a);
	ft_putendl_fd("sa", 1);
}

void	pb(t_info *info)
{
	ft_push_a(info);
	ft_stack_id_init(info->stack_a);
	ft_stack_id_init(info->stack_b);
	ft_stack_pos_init(info->stack_a, info->stack_b);
	ft_putendl_fd("pb", 1);
}

void	ra(t_stack *stack_a)
{
	ft_rotate(stack_a);
	ft_stack_id_init(stack_a);
	ft_putendl_fd("ra", 1);
}

void	rra(t_stack *stack_a)
{
	ft_reverse_rotate(stack_a);
	ft_stack_id_init(stack_a);
	ft_putendl_fd("rra", 1);
}
