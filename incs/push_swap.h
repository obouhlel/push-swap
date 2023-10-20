/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:10:03 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 20:10:26 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// read, write, malloc, free, exit

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

# include "utils.h"
# include "api.h"
# include "structs.h"
# include "enums.h"
# include "list.h"
# include "debug.h"

# define TRUE 1
# define FALSE 0
# define MAX 100000

// parsing.c 5/5
int		*parsing(int ac, char **strs_nbrs, int *nb_nbrs);

// stack.c 5/5
int		init_stack(t_stack *stack, int *tab, int nb_nbrs);
void	destroy_stack(t_stack *stack);

// info.c 4/5
void	update_info(t_stack *stack);

// sort.c 5/5
int		sort(t_stack *stack);

// sort_utils.c	5/5
int		found_index(int value, int *tab, int size);
void	sort_algo_5_bis(t_stack *stack);
void	sort_with_mediane(t_stack *stack);
void	do_move(t_stack *stack, t_move move);

// sort_utils_bis.c 5/5
void	choose_move(t_stack *stack);

#endif