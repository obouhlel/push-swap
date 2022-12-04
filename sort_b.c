/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:43:30 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/04 16:56:53 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sb
void	push_swap_sa(t_list **lst_b)
{
	swap_of_2_top(lst_b);
	ft_putendl_fd("sb", 1);
}

//pb
void	push_swap_pa(t_list **lst_a, t_list **lst_b)
{
	swap_top_1_to_2(lst_a, lst_b);
	ft_putendl_fd("pb", 1);
}

//rb
void	push_swap_ra(t_list **lst_b)
{
	swap_to_the_top(lst_b);
	ft_putendl_fd("rb", 1);
}

//rrb
void	push_swap_rra(t_list **lst_b)
{
	swap_to_the_bot(lst_b);
	ft_putendl_fd("rrb", 1);
}
