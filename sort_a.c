/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:43:30 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/04 16:55:03 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sa
void	push_swap_sa(t_list **lst_a)
{
	swap_of_2_top(lst_a);
	ft_putendl_fd("sa", 1);
}

//pa
void	push_swap_pa(t_list **lst_b, t_list **lst_a)
{
	swap_top_1_to_2(lst_b, lst_a);
	ft_putendl_fd("pa", 1);
}

//ra
void	push_swap_ra(t_list **lst_a)
{
	swap_to_the_top(lst_a);
	ft_putendl_fd("ra", 1);
}

//rra
void	push_swap_rra(t_list **lst_a)
{
	swap_to_the_bot(lst_a);
	ft_putendl_fd("rra", 1);
}
