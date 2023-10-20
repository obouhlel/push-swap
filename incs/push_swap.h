/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:10:03 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 10:44:04 by obouhlel         ###   ########.fr       */
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

// data.c 5/5
void	swap_int(int *a, int *b);
int		found_pos(int *sorted_tab, int val, int size);
int		init_data(t_data *data, int *tab, int nb_nbrs);
void	destroy_data(t_data *data);

// info.c 5/5
int		get_i_pos(int pos, t_stack *stack, int size);
t_info	init_info(t_stack *stack, int size, t_data *data);

// sort.c 5/5
int		sort(t_data *data);

// sort_utils.c	2/5
void	sort_algo_5_bis(t_data *data);
void	sort_with_mediane(t_data *data, int *size_a);

#endif