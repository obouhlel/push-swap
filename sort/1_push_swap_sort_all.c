/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_push_swap_sort_all.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:46:24 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 20:20:26 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//ss
void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_stack_init_id(stack_a);
	ft_stack_init_id(stack_b);
	ft_putendl_fd("ss", 1);
}

//rr
void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_stack_init_id(stack_a);
	ft_stack_init_id(stack_b);
	ft_putendl_fd("rr", 1);
}

//rrr
void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	ft_stack_init_id(stack_a);
	ft_stack_init_id(stack_b);
	ft_putendl_fd("rrr", 1);
}
