/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:10:03 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/19 13:04:30 by obouhlel         ###   ########.fr       */
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
	ERROR_INIT = 4,
	ERROR_ALGO = 5,
	ERROR_MALLOC = 6
};

enum e_type
{
	RR,
	RRR,
	RA_RRB,
	RRA_RB
};

typedef struct s_stack
{
	int	val;
	int	pos;
}	t_stack;

typedef struct s_info
{
	t_stack		min;
	t_stack		max;
	t_stack		med;
}	t_info;

typedef struct s_data
{
	t_stack			*a;
	t_stack			*b;
	t_info			info_a;
	t_info			info_b;
	int				size_a;
	int				size_b;
	int				size;
	int				*sorted_tab;
}	t_data;

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

// algo.c 5/5
int		algo(t_data *data);

// algo_utils.c	2/5
void	push_to_b_5(t_data *data);
void	push_to_b_n(t_data *data, int *size_a);

// stack
// rotate
void	ra(t_stack *a, int size_a);
void	rb(t_stack *b, int size_b);
void	rr(t_stack *a, t_stack *b, int size_a, int size_b);

// rotate_reverse
void	rra(t_stack *a, int size_a);
void	rrb(t_stack *b, int size_b);
void	rrr(t_stack *a, t_stack *b, int size_a, int size_b);

// swap
void	sa(t_stack *a, int size_a);
void	sb(t_stack *b, int size_b);
void	ss(t_stack *a, t_stack *b, int size_a, int size_b);

// push
void	pa(t_stack *a, t_stack *b, int *size_a, int *size_b);
void	pb(t_stack *a, t_stack *b, int *size_a, int *size_b);

// debug 2/5 remove after the work finished
void	print_stack(t_stack *stack, int size);
void	print_info(t_info info);

#endif