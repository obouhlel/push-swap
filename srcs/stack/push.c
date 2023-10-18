/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:40:28 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/18 11:47:26 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reset_index_of_stack(t_stack *stack, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		stack[i].index = i + 1;
		i++;
	}
}

static
void	push(t_stack *to_push, t_stack *to_receve, int *size_tp, int *size_tr)
{
	const int	size = *size_tp + *size_tr;
	t_stack		tmp_top;
	int			i;

	tmp_top = to_push[0];
	to_push[0] = (t_stack){0, 0, 0};
	i = -1;
	while (++i < *size_tp)
		if (i + 1 < size)
			to_push[i] = to_push[i + 1];
	*size_tp -= 1;
	reset_index_of_stack(to_push, *size_tp);
	*size_tr += 1;
	i = *size_tr + 1;
	while (--i > 0)
		if (i < size && i - 1 >= 0)
			to_receve[i] = to_receve[i - 1];
	to_receve[0] = tmp_top;
	reset_index_of_stack(to_receve, *size_tr);
}

void	pa(t_stack *stack_a, t_stack *stack_b, int *size_a, int *size_b)
{
	if (*size_b > 0)
		push(stack_b, stack_a, size_b, size_a);
	ft_putendl("pa");

}

void	pb(t_stack *stack_a, t_stack *stack_b, int *size_a, int *size_b)
{
	if (*size_a > 0)
		push(stack_a, stack_b, size_a, size_b);
	ft_putendl("pb");
}
