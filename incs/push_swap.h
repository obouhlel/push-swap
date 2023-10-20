/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:10:03 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 12:22:56 by obouhlel         ###   ########.fr       */
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

// parsing.c 5/5
int		*parsing(int ac, char **strs_nbrs, int *nb_nbrs);

// stack.c 5/5
int		init_stack(t_stack *stack, int *tab, int nb_nbrs);
void	destroy_stack(t_stack *stack);

// info.c 4/5
void	update_info(t_stack *stack);

// sort.c 5/5
int		sort(t_stack *stack);

// sort_utils.c	3/5
int		get_i_pos(int value, int *tab, int size);
void	sort_algo_5_bis(t_stack *stack);
void	sort_with_mediane(t_stack *stack);

#endif