/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:41:00 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/18 20:46:39 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *a, t_stack *b)
{
	t_stack	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sa(t_stack *a, int size_a)
{
	if (size_a > 1)
		swap(&a[0], &a[1]);
	ft_putendl("sa");
}

void	sb(t_stack *b, int size_b)
{
	if (size_b > 1)
		swap(&b[0], &b[1]);
	ft_putendl("sb");
}

void	ss(t_stack *a, t_stack *b, int size_a, int size_b)
{
	if (size_a > 1)
		swap(&a[0], &a[1]);
	if (size_b > 1)
		swap(&b[0], &b[1]);
	ft_putendl("ss");
}
