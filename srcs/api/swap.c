/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:41:00 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 10:03:17 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "api.h"
#include "utils.h"

static void	swap(t_stack *a, t_stack *b)
{
	t_stack	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sa(t_data *data, bool print)
{
	if (data->size_a > 1)
		swap(&data->a[0], &data->a[1]);
	if (print)
		ft_putendl("sa");
}

void	sb(t_data *data, bool print)
{
	if (data->size_b > 1)
		swap(&data->b[0], &data->b[1]);
	if (print)
		ft_putendl("sb");
}

void	ss(t_data *data, bool print)
{
	sa(data, FALSE);
	sb(data, FALSE);
	if (print)
		ft_putendl("ss");
}
