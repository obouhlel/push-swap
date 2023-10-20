/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:10:03 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 22:52:12 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

# include "utils.h"
# include "api.h"
# include "structs.h"
# include "enums.h"
# include "debug.h"

# define TRUE 1
# define FALSE 0
# define MAX 100000

int		*parsing(int ac, char **strs_nbrs, int *nb_nbrs);

int		init_stack(t_stack *stack, int *tab, int nb_nbrs);
void	destroy_stack(t_stack *stack);

void	update_info(t_stack *stack);

int		sort(t_stack *stack);

int		found_index(int value, int *tab, int size);
void	sort_algo_5_bis(t_stack *stack);
void	sort_with_mediane(t_stack *stack);
void	do_move(t_stack *stack, t_move move);

void	choose_move(t_stack *stack);

#endif