/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_push_swap_sort_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:43:30 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 20:21:06 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//sa
void	sa(t_stack *stack_a)
{
	swap(stack_a);
	ft_stack_init_id(stack_a);
	ft_putendl_fd("sa", 1);
}

//pa
void	pa(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_b, stack_a);
	ft_stack_init_id(stack_a);
	ft_stack_init_id(stack_b);
	ft_putendl_fd("pa", 1);
}

//ra
void	ra(t_stack *stack_a)
{
	rotate(stack_a);
	ft_stack_init_id(stack_a);
	ft_putendl_fd("ra", 1);
}

//rra
void	rra(t_stack *stack_a)
{
	rotate_reverse(stack_a);
	ft_stack_init_id(stack_a);
	ft_putendl_fd("rra", 1);
}
