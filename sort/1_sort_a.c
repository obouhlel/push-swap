/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_sort_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:12:29 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/16 17:43:33 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_push_a(t_stack *stack_a, t_stack *stack_b, t_info *info)
{
	int		tmp;
	t_stack	*stack_tmp;

	tmp = stack_a->value;
	stack_tmp = ft_stack_new(tmp);
	if (!stack_tmp)
	{
		free_info(info);
		ft_putendl_fd("Error", 1);
		exit(0);
	}
	ft_stack_add_front(&stack_b, stack_tmp);
	stack_a = ft_stack_deltop(stack_a);
}

void	sa(t_stack *stack_a)
{
	ft_swap(stack_a);
	ft_stack_id_init(stack_a);
	ft_putendl_fd("sa", 1);
}

void	pa(t_info *info)
{
	ft_push_a(info->stack_a, info->stack_b, info);
	ft_stack_id_init(info->stack_a);
	ft_stack_id_init(info->stack_b);
	ft_putendl_fd("pa", 1);
}

void	ra(t_stack *stack_a)
{
	rotate(stack_a);
	ft_stack_id_init(stack_a);
	ft_putendl_fd("ra", 1);
}

void	rra(t_stack *stack_a)
{
	reverse_rotate(stack_a);
	ft_stack_id_init(stack_a);
	ft_putendl_fd("rra", 1);
}
