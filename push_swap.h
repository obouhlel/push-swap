/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:10:03 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/04 11:53:00 by obouhlel         ###   ########.fr       */
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
void	ft_error_push_swap_digit(char **strs);

//sort.c
void	swap_of_2_top(t_list **lst);
void	swap_top_1_to_2(t_list **lst1, t_list **lst2);
void	swap_to_the_top(t_list **lst);
void	swap_to_the_bot(t_list **lst);

#endif