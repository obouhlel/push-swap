/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:40:47 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 10:03:25 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "api.h"
#include "utils.h"

static void	rotate_reverse(t_stack *stack, int size)
{
	t_stack	tmp;
	int		i;

	i = size - 1;
	tmp = stack[size - 1];
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[0] = tmp;
}

void	rra(t_data *data, bool print)
{
	if (data->size_a > 1)
		rotate_reverse(data->a, data->size_a);
	if (print)
		ft_putendl("rra");
}

void	rrb(t_data *data, bool print)
{
	if (data->size_b > 1)
		rotate_reverse(data->b, data->size_b);
	if (print)
		ft_putendl("rra");
}

void	rrr(t_data *data, bool print)
{
	rra(data, FALSE);
	rrb(data, FALSE);
	if (print)
		ft_putendl("rrr");
}
