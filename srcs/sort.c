/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:22:59 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 14:44:16 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
void	sort_size_3(t_stack *stack)
{
	if (stack->a[0] == stack->info_a.min)
	{
		if (stack->a[1] == stack->info_a.max)
		{
			sa(stack, TRUE);
			ra(stack, TRUE);
		}
	}
	else if (stack->a[0] == stack->info_a.max)
	{
		if (stack->a[1] == stack->info_a.min)
			ra(stack, TRUE);
		else
		{
			sa(stack, TRUE);
			rra(stack, TRUE);
		}
	}
	else
	{
		if (stack->a[1] == stack->info_a.min)
			sa(stack, TRUE);
		else
			rra(stack, TRUE);
	}
}

static
void	sort_size_5(t_stack *stack)
{
	sort_algo_5_bis(stack);
	update_info(stack);
	sort_size_3(stack);
	while (stack->info_b.size != 0)
		pa(stack, TRUE);
}

static
void	sort_size_n(t_stack *stack)
{
	sort_with_mediane(stack);
	update_info(stack);
	sort_size_3(stack);
	ft_putendl("Stack A:");
	print_stack(stack->a, stack->info_a.size);
	ft_putendl("Stack B:");
	print_stack(stack->b, stack->info_b.size);
}

int	sort(t_stack *stack)
{
	if (is_sorted(stack) == TRUE)
		return (EXIT_SUCCESS);
	if (stack->info.size == 2)
		sa(stack, TRUE);
	else if (stack->info.size <= 3)
		sort_size_3(stack);
	else if (stack->info.size <= 5)
		sort_size_5(stack);
	else
		sort_size_n(stack);
	if (is_sorted(stack) == TRUE)
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}
