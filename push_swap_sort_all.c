/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_all.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:46:24 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/14 09:59:31 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//ss
void	ft_push_swap_ss(t_list **stack_a, t_list **stack_b)
{
	ft_push_swap_sa(stack_a);
	ft_push_swap_sb(stack_b);
	ft_lst_init_id(*stack_a);
	ft_lst_init_id(*stack_b);
	ft_putendl_fd("ss", 1);
}

//rr
void	ft_push_swap_rr(t_list **stack_a, t_list **stack_b)
{
	ft_push_swap_ra(stack_a);
	ft_push_swap_rb(stack_b);
	ft_lst_init_id(*stack_a);
	ft_lst_init_id(*stack_b);
	ft_putendl_fd("rr", 1);
}

//rrr
void	ft_push_swap_rrr(t_list **stack_a, t_list **stack_b)
{
	ft_push_swap_rra(stack_a);
	ft_push_swap_rrb(stack_b);
	ft_lst_init_id(*stack_a);
	ft_lst_init_id(*stack_b);
	ft_putendl_fd("rrr", 1);
}
