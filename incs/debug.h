/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:59:24 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 19:18:37 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUG_H
# define DEBUG_H

# include "structs.h"

// debug.c 2/5 remove after the work finished
void	print_stack(int *tab, int size);
void	print_info(t_info info);
void	print_move(t_move move);
void	print(t_stack *stack);

#endif