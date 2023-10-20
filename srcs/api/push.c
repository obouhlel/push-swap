/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:40:28 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 10:55:16 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "api.h"
#include "utils.h"

static
void	push(t_stack *to_push, t_stack *to_receve, int *size_tp, int *size_tr)
{
	const int	size = *size_tp + *size_tr;
	t_stack		tmp_top;
	int			i;

	tmp_top = to_push[0];
	to_push[0] = (t_stack){0, 0};
	i = -1;
	while (++i < *size_tp)
		if (i + 1 < size)
			to_push[i] = to_push[i + 1];
	*size_tp -= 1;
	*size_tr += 1;
	i = *size_tr + 1;
	while (--i > 0)
		if (i < size && i - 1 >= 0)
			to_receve[i] = to_receve[i - 1];
	to_receve[0] = tmp_top;
}

void	pa(t_data *data, bool print)
{
	if (data->size_b > 0)
		push(data->b, data->a, &data->size_b, &data->size_a);
	if (print)
		ft_putendl("pa");
}

void	pb(t_data *data, bool print)
{
	if (data->size_a > 0)
		push(data->a, data->b, &data->size_a, &data->size_b);
	if (print)
		ft_putendl("pb");
}
