/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:05:15 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/22 11:39:10 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

/**
 * Checks if the stack is sorted in ascending order.
 * 
 * @param stack The stack to check.
 * @return TRUE if the stack is sorted, FALSE otherwise.
 */
static
int	is_sorted(t_stack *stack)
{
	int	i;

	if (stack->info_b.size != 0)
		return (FALSE);
	i = 0;
	while (i < stack->info_a.size)
	{
		if (stack->a[i] != i + 1)
			return (FALSE);
		i++;
	}
	return (TRUE);
}

static
int	check_line(char *line)
{
	int			i;
	const char	*moves[] = {"sa\n", "sb\n", "ss\n", "pa\n", "pb\n",
		"ra\n", "rb\n", "rr\n", "rra\n", "rrb\n", "rrr\n"};

	i = 0;
	while (i < 11)
	{
		if (ft_strcmp(line, moves[i]) == 0)
			return (i);
		i++;
	}
	return (ERROR);
}

static
void	do_move(int move, t_stack *stack)
{
	if (move == SA)
		sa(stack, FALSE);
	else if (move == SB)
		sb(stack, FALSE);
	else if (move == SS)
		ss(stack, FALSE);
	else if (move == PA)
		pa(stack, FALSE);
	else if (move == PB)
		pb(stack, FALSE);
	else if (move == RA)
		ra(stack, FALSE);
	else if (move == RB)
		rb(stack, FALSE);
	else if (move == RR)
		rr(stack, FALSE);
	else if (move == RRA)
		rra(stack, FALSE);
	else if (move == RRB)
		rrb(stack, FALSE);
	else if (move == RRR)
		rrr(stack, FALSE);
}

int	checker(t_stack *stack)
{
	char	*line;
	int		move;

	if (is_sorted(stack) == TRUE)
		return (ft_putendl(OK), EXIT_SUCCESS);
	line = get_next_line(0);
	while (line != NULL)
	{
		move = check_line(line);
		if (move == ERROR)
			return (free(line), ft_putendl_err("Error"), EXIT_FAILURE);
		do_move(move, stack);
		free(line);
		line = get_next_line(0);
	}
	if (is_sorted(stack) == TRUE)
		ft_putendl(OK);
	else
		ft_putendl(KO);
	return (EXIT_SUCCESS);
}
