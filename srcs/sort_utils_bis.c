/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_bis.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:07:24 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 20:11:24 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static
int	calculate_rrr_or_rr(int a, int b)
{
	if (a == b)
		return (a);
	if (a > b)
		return ((a - b) + b);
	if (a < b)
		return ((b - a) + a);
	return (a + b);
}

static
t_move	found_smallest_combo(int combo[4], t_move move, t_move best_move)
{
	int			min;
	int			type;
	int			i;

	min = combo[0];
	i = 0;
	while (i < 4)
	{
		if (combo[i] < min)
			min = combo[i];
		i++;
	}
	type = found_index(min, (int *)combo, 4);
	if (type == RA_RB)
		move = (t_move){.ra = move.ra, .rb = move.rb, .rra = 0, .rrb = 0};
	else if (type == RRA_RRB)
		move = (t_move){.ra = 0, .rb = 0, .rra = move.rra, .rrb = move.rrb};
	else if (type == RA_RRB)
		move = (t_move){.ra = move.ra, .rb = 0, .rra = 0, .rrb = move.rrb};
	else if (type == RRA_RB)
		move = (t_move){.ra = 0, .rb = move.rb, .rra = move.rra, .rrb = 0};
	if (min < best_move.ra + best_move.rb + best_move.rra + best_move.rrb)
		return (move);
	return (best_move);
}

static
t_move	found_best_move(t_stack *stack, t_move *move)
{
	int		combo[4];
	t_move	best_move;
	int		i;

	best_move = (t_move){MAX, MAX, MAX, MAX};
	i = 0;
	while (i < stack->info_b.size)
	{
		combo[RA_RB] = calculate_rrr_or_rr(move[i].ra, move[i].rb);
		combo[RRA_RRB] = calculate_rrr_or_rr(move[i].rra, move[i].rrb);
		combo[RA_RRB] = move[i].ra + move[i].rrb;
		combo[RRA_RB] = move[i].rra + move[i].rb;
		best_move = found_smallest_combo(combo, move[i], best_move);
		if (best_move.ra + best_move.rb + best_move.rra + best_move.rrb == 0)
			break ;
		i++;
	}
	return (best_move);
}

static
int	found_nb_ra(t_stack *stack, int value)
{
	int	i;

	i = 1;
	while (i < stack->info_a.size)
	{
		if (value > stack->a[i - 1] && value < stack->a[i])
			return (i);
		i++;
	}
	if (value < stack->a[0] && value > stack->a[stack->info_a.size - 1])
		return (i);
	return (found_index(stack->info_a.min, stack->a, stack->info_a.size));
}

void	choose_move(t_stack *stack)
{
	t_move		*move;
	t_move		to_do;
	int			i;

	move = (t_move *)ft_calloc(stack->info_b.size, sizeof(t_move));
	if (!move)
		return (ft_putendl("Error"), destroy_stack(stack), exit(ERROR_MALLOC));
	i = 0;
	while (i < stack->info_b.size)
	{
		move[i] = (t_move)
		{
			.ra = found_nb_ra(stack, stack->b[i]),
			.rb = i,
			.rra = stack->info_a.size - found_nb_ra(stack, stack->b[i]),
			.rrb = stack->info_b.size - i
		};
		i++;
	}
	to_do = found_best_move(stack, move);
	do_move(stack, to_do);
	free(move);
}
