/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:40:28 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/18 20:46:39 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	pa(t_stack *a, t_stack *b, int *size_a, int *size_b)
{
	if (*size_b > 0)
		push(b, a, size_b, size_a);
	ft_putendl("pa");
}

void	pb(t_stack *a, t_stack *b, int *size_a, int *size_b)
{
	if (*size_a > 0)
		push(a, b, size_a, size_b);
	ft_putendl("pb");
}
