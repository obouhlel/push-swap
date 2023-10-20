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

/*******************************************************************************/

void	do_move(t_stack *stack, t_move move)
{
	while (move.ra > 0 && move.rb > 0)
	{
		rr(stack, TRUE);
		move.ra--;
		move.rb--;
	}
	while (move.rra > 0 && move.rrb > 0)
	{
		rrr(stack, TRUE);
		move.rra--;
		move.rrb--;
	}
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

#define MAX 10000

t_move	found_best_move(t_stack *stack, t_move *move)
{
	int		combo[4];
	t_move	best_move;
	int		i;

	best_move = (t_move){MAX, MAX, MAX, MAX};
	i = 0;
	while (i < stack->info_b.size)
	{
		combo[RA_RB] = move[i].ra + move[i].rb;
		combo[RRA_RRB] = move[i].rra + move[i].rrb;
		combo[RA_RRB] = move[i].ra + move[i].rrb;
		combo[RRA_RB] = move[i].rra + move[i].rb;
		best_move = found_smallest_combo(combo, move[i], best_move);
		if (best_move.ra + best_move.rb + best_move.rra + best_move.rrb == 0)
			break ;
		i++;
	}
	return (best_move);
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
