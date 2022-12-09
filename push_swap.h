/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:10:03 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/09 09:17:15 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// read, write, malloc, free, exit

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
//include .h
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

//remove after
void	ft_print_color(t_list *lst_a, t_list *lst_b);

//error_1.c
char	**ft_clear_av(char **av, int n);
void	ft_error_push_swap_double(t_list *lst, char **nbrs);
void	ft_error_push_swap_int(char **nstr, int n);
void	ft_error_push_swap_digit(char **strs);

//error_2.c
void	delete_value(int a);
void	free_nbrs_lst(char **nbrs, t_list **lst);
void	free_all_lst(t_list **lst_a, t_list **lst_b);
void	ft_create_lst_a(t_list **lst, char **nbrs, int n);

//sort.c
void	swap_of_2_top(t_list **lst);
void	swap_top_1_to_2(t_list **lst1, t_list **lst2);
void	swap_to_the_top(t_list **lst);
void	swap_to_the_bot(t_list **lst);

//sort_a.c
void	ft_push_swap_sa(t_list **lst);
void	ft_push_swap_pa(t_list **lst_b, t_list **lst_a);
void	ft_push_swap_ra(t_list **lst);
void	ft_push_swap_rra(t_list **lst);

//sort_b.c
void	ft_push_swap_sb(t_list **lst);
void	ft_push_swap_pb(t_list **lst_a, t_list **lst_b);
void	ft_push_swap_rb(t_list **lst);
void	ft_push_swap_rrb(t_list **lst);

//sort_all.c
void	ft_push_swap_ss(t_list **lst_a, t_list **lst_b);
void	ft_push_swap_rr(t_list **lst_a, t_list **lst_b);
void	ft_push_swap_rrr(t_list **lst_a, t_list **lst_b);

//algo.c
void	ft_algo_push_swap(t_list **lst_a, t_list **lst_b);

#endif