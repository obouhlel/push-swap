/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:57:34 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 20:25:26 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

# define SIZE_MOVE 5

typedef struct s_info
{
	int	size;
	int	min;
	int	max;
	int	med;
}	t_info;

typedef struct s_stack
{
	int		*a;
	int		*b;
	t_info	info;
	t_info	info_a;
	t_info	info_b;
}	t_stack;

typedef struct s_move
{
	int	ra;
	int	rra;
	int	rb;
	int	rrb;
}	t_move;

#endif