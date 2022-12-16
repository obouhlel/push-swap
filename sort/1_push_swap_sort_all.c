/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_push_swap_sort_all.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:46:24 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/16 13:50:16 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//ss
void	ss(t_info **info)
{
	swap((*info)->stack_a);
	swap((*info)->stack_b);
	ft_stack_init_id((*info)->stack_a[0]);
	ft_stack_init_id((*info)->stack_b[0]);
	ft_putendl_fd("ss", 1);
}

//rr
void	rr(t_info **info)
{
	rotate((*info)->stack_a);
	rotate((*info)->stack_b);
	ft_stack_init_id((*info)->stack_a[0]);
	ft_stack_init_id((*info)->stack_b[0]);
	ft_putendl_fd("rr", 1);
}

//rrr
void	rrr(t_info **info)
{
	rotate_reverse((*info)->stack_a);
	rotate_reverse((*info)->stack_b);
	ft_stack_init_id((*info)->stack_a[0]);
	ft_stack_init_id((*info)->stack_b[0]);
	ft_putendl_fd("rrr", 1);
}
