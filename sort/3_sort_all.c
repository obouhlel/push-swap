/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_sort_all.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:16:02 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/16 18:30:56 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_stack_id_init(stack_a);
	ft_stack_id_init(stack_b);
	ft_putendl_fd("ss", 1);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	ft_stack_id_init(stack_a);
	ft_stack_id_init(stack_b);
	ft_putendl_fd("rr", 1);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
	ft_stack_id_init(stack_a);
	ft_stack_id_init(stack_b);
	ft_putendl_fd("rrr", 1);
}
