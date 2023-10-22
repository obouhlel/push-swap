/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:54:17 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/22 11:44:21 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# include "utils.h"
# include "structs.h"
# include "enums.h"
# include "api.h"

# define OK			"\e[32mOK\e[0m"
# define KO			"\e[31mKO\e[0m"

int		*parsing(int ac, char **strs_nbrs, int *nb_nbrs);

void	bubble_sort(int *tab, int size, int sorted_tab[MAX_VALUE]);
int		init_stack(t_stack *stack, int *tab, int nb_nbrs);
void	destroy_stack(t_stack *stack);

void	update_info(t_stack *stack, bool mode);

int		checker(t_stack *stack);

#endif