/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:10:03 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/14 09:26:42 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// read, write, malloc, free, exit

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
//include .h
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

void	ft_print_color(t_list *stack_a, t_list *stack_b);

//error_1.c
char	**ft_clear_av(char **av, int n);
void	ft_error_push_swap_double(t_list *stack, char **nbrs);
void	ft_error_push_swap_int(char **nstr, int n);
void	ft_error_push_swap_digit(char **strs);

//error_2.c
void	delete_value(int a);
void	free_nbrs_stack(char **nbrs, t_list **stack);
void	free_all_stack(t_list **stack_a, t_list **stack_b);
void	ft_create_stack_a(t_list **stack, char **nbrs, int n);

//sort.c
void	swap_of_2_top(t_list **stack);
void	swap_top_1_to_2(t_list **stack1, t_list **stack2);
void	swap_to_the_top(t_list **stack);
void	swap_to_the_bot(t_list **stack);

//sort_a.c
void	ft_push_swap_sa(t_list **stack);
void	ft_push_swap_pa(t_list **stack_b, t_list **stack_a);
void	ft_push_swap_ra(t_list **stack);
void	ft_push_swap_rra(t_list **stack);

//sort_b.c
void	ft_push_swap_sb(t_list **stack);
void	ft_push_swap_pb(t_list **stack_a, t_list **stack_b);
void	ft_push_swap_rb(t_list **stack);
void	ft_push_swap_rrb(t_list **stack);

//sort_all.c
void	ft_push_swap_ss(t_list **stack_a, t_list **stack_b);
void	ft_push_swap_rr(t_list **stack_a, t_list **stack_b);
void	ft_push_swap_rrr(t_list **stack_a, t_list **stack_b);

//push_swap_algo.c
void	ft_algo_push_swap(t_list **stack_a, t_list **stack_b);
//push_swap_check.c
int		ft_push_swap_check(t_list *stack);
void	ft_push_swap_check_sort(t_list **stack, int value);
//push_swap_algo_calcule.c
int		ft_algo_min(t_list *stack);
int		ft_algo_max(t_list *stack);
ssize_t	ft_algo_moy(t_list *stack);
int		ft_algo_med(t_list *stack, t_list **stack_a, t_list **stack_b);
//push_swap_algo_3.c
void	ft_algo_ps_3(t_list **stack, int min, int max);
//push_swap_algo_5.c
void	ft_algo_ps_5(t_list **stack_a, t_list **stack_b, int min, int max);
//push_swap_algo_n.c
void	ft_algo_ps_n(t_list **stack_a, t_list **stack_b);

#endif