/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:57:34 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 10:40:12 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

# define SIZE_MOVE 5

typedef struct s_list
{
	char			move[SIZE_MOVE];
	struct s_list	*next;
}	t_list;

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
	t_list			*instruction;
}	t_data;

#endif