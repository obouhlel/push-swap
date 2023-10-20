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

/**
 * Returns the index of the first occurrence of a given value in an array.
 *
 * @param value The value to search for in the array.
 * @param tab The array to search in.
 * @param size The size of the array.
 * @return The index of the first occurrence of 
 *         the value in the array, or -1 if the value is not found.
 */
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

/**
 * Sorts the top 5 elements of stack A using a specific algorithm.
 * If the index of the first element to push to stack B is less 
 * than the size of stack A divided by 2,
 * the mode is set to RA (rotate A).
 * Otherwise, the mode is set to RRA (reverse rotate A).
 * The function then iterates twice over the top 2 elements of stack A.
 * If the first element is equal to i + 1 
 * (where i is the current iteration index),
 * it is pushed to stack B and the mode is updated accordingly.
 * Otherwise, the mode is used to rotate or reverse rotate stack A.
 * @param stack The stack structure containing both stacks A and B.
 */
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

/**
 * Sorts the stack using the median value as a pivot.
 * 
 * @param stack The stack to be sorted.
 */
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

/**
 * Performs the necessary rrr and rr moves on the given stack based on the
 * values in the given move struct.
 *
 * @param stack The stack to perform the moves on.
 * @param move The struct containing the number of moves to perform.
 */
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

/**
 * Executes a given move on the stack.
 * 
 * @param stack The stack to perform the move on.
 * @param move The move to perform.
 */
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
