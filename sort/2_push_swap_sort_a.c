/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_push_swap_sort_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:43:30 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/16 13:49:18 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//sa
void	sa(t_info **info)
{
	swap((*info)->stack_a);
	ft_stack_init_id((*info)->stack_a[0]);
	ft_putendl_fd("sa", 1);
}

//pa
void	pa(t_info **info)
{
	if (!push((*info)->stack_b, (*info)->stack_a))
	{
		free_info(*info);
		ft_putendl_fd("Error", 1);
		exit(0);
	}
	ft_stack_init_id((*info)->stack_a[0]);
	ft_stack_init_id((*info)->stack_b[0]);
	ft_putendl_fd("pa", 1);
}

//ra
void	ra(t_info **info)
{
	rotate((*info)->stack_a);
	ft_stack_init_id((*info)->stack_a[0]);
	ft_putendl_fd("ra", 1);
}

//rra
void	rra(t_info **info)
{
	rotate_reverse((*info)->stack_a);
	ft_stack_init_id((*info)->stack_a[0]);
	ft_putendl_fd("rra", 1);
}
