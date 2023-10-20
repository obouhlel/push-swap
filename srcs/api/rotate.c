/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:40:54 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 10:03:23 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "api.h"
#include "utils.h"

static void	rotate(t_stack *stack, int size)
{
	t_stack	tmp;
	int		i;

	i = 0;
	tmp = stack[0];
	while (i < size - 1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[size - 1] = tmp;
}

void	ra(t_data *data, bool print)
{
	if (data->size_a > 1)
		rotate(data->a, data->size_a);
	if (print)
		ft_putendl("ra");
}

void	rb(t_data *data, bool print)
{
	if (data->size_b > 1)
		rotate(data->b, data->size_b);
	if (print)
		ft_putendl("rb");
}

void	rr(t_data *data, bool print)
{
	ra(data, FALSE);
	rb(data, FALSE);
	if (print)
		ft_putendl("rr");
}
