/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:40:28 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/22 10:57:11 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "api.h"
#include "utils.h"

static
void	push(int *to_push, int *to_receve, int *size_tp, int *size_tr)
{
	const int	size = *size_tp + *size_tr;
	int			tmp_top;
	int			i;

	tmp_top = to_push[0];
	to_push[0] = 0;
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

void	pa(t_stack *stack, bool print)
{
	if (stack->info_b.size > 0)
	{
		push(stack->b, stack->a, &stack->info_b.size, &stack->info_a.size);
		if (print)
			ft_putendl("pa");
	}
}

void	pb(t_stack *stack, bool print)
{
	if (stack->info_a.size > 0)
	{
		push(stack->a, stack->b, &stack->info_a.size, &stack->info_b.size);
		if (print)
			ft_putendl("pb");
	}
}
