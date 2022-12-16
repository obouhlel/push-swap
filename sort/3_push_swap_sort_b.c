/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_push_swap_sort_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:43:30 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/16 13:49:32 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//sb
void	sb(t_info **info)
{
	swap((*info)->stack_b);
	ft_stack_init_id((*info)->stack_b[0]);
	ft_putendl_fd("sb", 1);
}

//pb
void	pb(t_info **info)
{
	if (!push((*info)->stack_a, (*info)->stack_b))
	{
		free_info(*info);
		ft_putendl_fd("Error", 1);
		exit(0);
	}
	ft_stack_init_id((*info)->stack_a[0]);
	ft_stack_init_id((*info)->stack_b[0]);
	ft_putendl_fd("pb", 1);
}

//rb
void	rb(t_info **info)
{
	rotate((*info)->stack_b);
	ft_stack_init_id((*info)->stack_b[0]);
	ft_putendl_fd("rb", 1);
}

//rrb
void	rrb(t_info **info)
{
	rotate_reverse((*info)->stack_b);
	ft_stack_init_id((*info)->stack_b[0]);
	ft_putendl_fd("rrb", 1);
}
