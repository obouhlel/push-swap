/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:40:47 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/18 20:46:39 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	rra(t_stack *a, int size_a)
{
	if (size_a > 1)
		rotate_reverse(a, size_a);
	ft_putendl("rra");
}

void	rrb(t_stack *b, int size_b)
{
	if (size_b > 1)
		rotate_reverse(b, size_b);
	ft_putendl("rrb");
}

void	rrr(t_stack *a, t_stack *b, int size_a, int size_b)
{
	if (size_a > 1)
		rotate_reverse(a, size_a);
	if (size_b > 1)
		rotate_reverse(b, size_b);
	ft_putendl("rrr");
}
