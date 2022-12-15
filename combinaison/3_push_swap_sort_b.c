/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:43:30 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 15:02:40 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sb
void	ft_push_swap_sb(t_stack **stack_b)
{
	swap_of_2_top(stack_b);
	ft_stack_init_id(*stack_b);
	ft_putendl_fd("sb", 1);
}

//pb
void	ft_push_swap_pb(t_stack **stack_a, t_stack **stack_b)
{
	swap_top_1_to_2(stack_a, stack_b);
	ft_stack_init_id(*stack_a);
	ft_stack_init_id(*stack_b);
	ft_putendl_fd("pb", 1);
}

//rb
void	ft_push_swap_rb(t_stack **stack_b)
{
	swap_to_the_top(stack_b);
	ft_stack_init_id(*stack_b);
	ft_putendl_fd("rb", 1);
}

//rrb
void	ft_push_swap_rrb(t_stack **stack_b)
{
	swap_to_the_bot(stack_b);
	ft_stack_init_id(*stack_b);
	ft_putendl_fd("rrb", 1);
}
