/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_push_swap_sort_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:43:30 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 20:30:25 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//sb
void	sb(t_stack *stack_b)
{
	swap(stack_b);
	ft_stack_init_id(stack_b);
	ft_putendl_fd("sb", 1);
}

//pb
void	pb(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_a, stack_b);
	ft_stack_init_id(stack_a);
	ft_stack_init_id(stack_b);
	ft_putendl_fd("pb", 1);
}

//rb
void	rb(t_stack *stack_b)
{
	rotate(stack_b);
	ft_stack_init_id(stack_b);
	ft_putendl_fd("rb", 1);
}

//rrb
void	rrb(t_stack *stack_b)
{
	rotate_reverse(stack_b);
	ft_stack_init_id(stack_b);
	ft_putendl_fd("rrb", 1);
}
