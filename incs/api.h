/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   api.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:00:58 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 10:46:32 by obouhlel         ###   ########.fr       */
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
void	ra(t_data *data, bool print);
void	rb(t_data *data, bool print);
void	rr(t_data *data, bool print);

// rotate_reverse
void	rra(t_data *data, bool print);
void	rrb(t_data *data, bool print);
void	rrr(t_data *data, bool print);

// swap
void	sa(t_data *data, bool print);
void	sb(t_data *data, bool print);
void	ss(t_data *data, bool print);

// push
void	pa(t_data *data, bool print);
void	pb(t_data *data, bool print);

#endif