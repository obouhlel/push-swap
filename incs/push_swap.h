/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:10:03 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/17 20:16:59 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// read, write, malloc, free, exit

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

# include "utils.h"

# define TRUE 1
# define FALSE 0

enum
{
	NO_ERROR = 0,
	ERROR_ARGS_NUMBER = 1,
	ERROR_ARGS_EMPTY = 2,
	ERROR_PARSING = 3,
	ERROR_INIT = 4
};

typedef struct s_stack
{
	int	value;
	int	index;
	int	position;
}	t_stack;
typedef struct s_data
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		*tab;
	int		*sorted_tab;
	int		nb_nbrs;
	int		size_a;
	int		size_b;
}	t_data;

int		*parsing(int ac, char **strs_nbrs, int *nb_nbrs);

int		init_data(t_data *data);
void	destroy_data(t_data *data);
int		found_position(int *sorted_tab, int value, int size);

void	print_data(t_data *data);

#endif