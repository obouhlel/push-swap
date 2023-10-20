/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   api.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:00:58 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 11:43:50 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef API_H
# define API_H

# include <stdbool.h>
# include "structs.h"

# define TRUE 1
# define FALSE 0

// api
// rotate
void	ra(t_stack *stack, bool print);
void	rb(t_stack *stack, bool print);
void	rr(t_stack *stack, bool print);

// rotate_reverse
void	rra(t_stack *stack, bool print);
void	rrb(t_stack *stack, bool print);
void	rrr(t_stack *stack, bool print);

// swap
void	sa(t_stack *stack, bool print);
void	sb(t_stack *stack, bool print);
void	ss(t_stack *stack, bool print);

// push
void	pa(t_stack *stack, bool print);
void	pb(t_stack *stack, bool print);

#endif