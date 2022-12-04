/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:10:03 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/04 17:03:24 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// read, write, malloc, free, exit

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
//include .h
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

//error.c
void	ft_error_push_swap_double(t_list *lst);
void	ft_error_push_swap_int(char **nstr, int n);
void	ft_error_push_swap_digit(char **strs);

//sort.c
void	swap_of_2_top(t_list **lst);
void	swap_top_1_to_2(t_list **lst1, t_list **lst2);
void	swap_to_the_top(t_list **lst);
void	swap_to_the_bot(t_list **lst);

//sort_a.c
void	push_swap_sa(t_list **lst);
void	push_swap_pa(t_list **lst_b, t_list **lst_a);
void	push_swap_ra(t_list **lst);
void	push_swap_rra(t_list **lst);

//sort_b.c
void	push_swap_sb(t_list **lst);
void	push_swap_pb(t_list **lst_a, t_list **lst_b);
void	push_swap_rb(t_list **lst);
void	push_swap_rrb(t_list **lst);

//sort_all.c
void	push_swap_ss(t_list **lst_a, t_list **lst_b);
void	push_swap_rr(t_list **lst_a, t_list **lst_b);
void	push_swap_rrr(t_list **lst_a, t_list **lst_b);

//algo.c
void	ft_algo_push_swap(t_list lst_a, t_list lst_b);

#endif