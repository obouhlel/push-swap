/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:43:30 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/06 17:49:02 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sb
void	ft_push_swap_sb(t_list **lst_b)
{
	swap_of_2_top(lst_b);
	ft_putendl_fd("sb", 1);
}

//pb
void	ft_push_swap_pb(t_list **lst_a, t_list **lst_b)
{
	swap_top_1_to_2(lst_a, lst_b);
	ft_putendl_fd("pb", 1);
}

//rb
void	ft_push_swap_rb(t_list **lst_b)
{
	swap_to_the_top(lst_b);
	ft_putendl_fd("rb", 1);
}

//rrb
void	ft_push_swap_rrb(t_list **lst_b)
{
	swap_to_the_bot(lst_b);
	ft_putendl_fd("rrb", 1);
}
