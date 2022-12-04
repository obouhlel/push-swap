/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:46:24 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/04 16:58:46 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//ss
void	push_swap_ss(t_list **lst_a, t_list **lst_b)
{
	push_swap_sa(lst_a);
	push_swap_sb(lst_b);
	ft_putendl_fd("ss", 1);
}

//rr
void	push_swap_rr(t_list **lst_a, t_list **lst_b)
{
	push_swap_ra(lst_a);
	push_swap_rb(lst_b);
	ft_putendl_fd("rr", 1);
}

//rrr
void	push_swap_rrr(t_list **lst_a, t_list **lst_b)
{
	push_swap_rra(lst_a);
	push_swap_rrb(lst_b);
	ft_putendl_fd("rrr", 1);
}
