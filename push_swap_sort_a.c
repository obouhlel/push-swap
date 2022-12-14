/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:43:30 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/14 09:59:23 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sa
void	ft_push_swap_sa(t_list **stack_a)
{
	swap_of_2_top(stack_a);
	ft_lst_init_id(*stack_a);
	ft_putendl_fd("sa", 1);
}

//pa
void	ft_push_swap_pa(t_list **stack_a, t_list **stack_b)
{
	swap_top_1_to_2(stack_a, stack_b);
	ft_lst_init_id(*stack_a);
	ft_lst_init_id(*stack_b);
	ft_putendl_fd("pa", 1);
}

//ra
void	ft_push_swap_ra(t_list **stack_a)
{
	swap_to_the_top(stack_a);
	ft_lst_init_id(*stack_a);
	ft_putendl_fd("ra", 1);
}

//rra
void	ft_push_swap_rra(t_list **stack_a)
{
	swap_to_the_bot(stack_a);
	ft_lst_init_id(*stack_a);
	ft_putendl_fd("rra", 1);
}
