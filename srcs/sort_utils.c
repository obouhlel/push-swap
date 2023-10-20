/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:43:31 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 17:44:52 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	found_index(int value, int *tab, int size)
{
	int			i;

	i = 0;
	while (i < size)
	{
		if (tab[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

void	sort_algo_5_bis(t_stack *stack)
{
	int	i;
	int	mode;

	i = 0;
	if (found_index(1, stack->a, stack->info_a.size) < \
		stack->info_a.size / 2)
		mode = RA;
	else
		mode = RRA;
	while (i < 2)
	{
		if (stack->a[0] == i + 1)
		{
			pb(stack, TRUE);
			if (found_index(++i + 1, stack->a, stack->info_a.size) < \
				stack->info_a.size / 2)
				mode = RA;
			else
				mode = RRA;
		}
		else if (mode == RA)
			ra(stack, TRUE);
		else
			rra(stack, TRUE);
	}
}

void	sort_with_mediane(t_stack *stack)
{
	while (stack->info_a.size != 3)
	{
		if (stack->info_a.med <= stack->a[0])
		{
			pb(stack, TRUE);
			if (stack->info_a.med == stack->b[0])
				update_info(stack);
		}
		else
			ra(stack, TRUE);
	}
}

static
void	do_rrr_rr_move(t_stack *stack, t_move *move)
{
	while (move->rra > 0 && move->rrb > 0)
	{
		rrr(stack, TRUE);
		move->rra--;
		move->rrb--;
	}
	while (move->ra > 0 && move->rb > 0)
	{
		rr(stack, TRUE);
		move->ra--;
		move->rb--;
	}
}

void	do_move(t_stack *stack, t_move move)
{
	do_rrr_rr_move(stack, &move);
	while (move.ra > 0)
	{
		ra(stack, TRUE);
		move.ra--;
	}
	while (move.rb > 0)
	{
		rb(stack, TRUE);
		move.rb--;
	}
	while (move.rra > 0)
	{
		rra(stack, TRUE);
		move.rra--;
	}
	while (move.rrb > 0)
	{
		rrb(stack, TRUE);
		move.rrb--;
	}
	pa(stack, TRUE);
}
