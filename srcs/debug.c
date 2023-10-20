/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:48:40 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 19:20:54 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.h"
#include "utils.h"
#include <stdio.h>

void	print_stack(int *tab, int size)
{
	int		i;

	if (size == 0)
		return ((void)printf("empty\n"));
	i = 0;
	while (i < size)
	{
		if (i + 1 < size)
			printf("%d ", tab[i]);
		else
			printf("%d\n", tab[i]);
		i++;
	}
}

void	print_info(t_info info)
{
	printf("\tsize: %d\n", info.size);
	printf("\tmin: %d\n", info.min);
	printf("\tmax: %d\n", info.max);
	printf("\tmed: %d\n", info.med);
}

void	print_move(t_move move)
{
	printf("\tra: %d\n", move.ra);
	printf("\trb: %d\n", move.rb);
	printf("\trra: %d\n", move.rra);
	printf("\trrb: %d\n", move.rrb);
}

void	print(t_stack *stack)
{
	ft_putendl("---------------------");
	printf("a: ");
	print_stack(stack->a, stack->info_a.size);
	printf("info_a:\n");
	print_info(stack->info_a);
	printf("b: ");
	print_stack(stack->b, stack->info_b.size);
	printf("info_b:\n");
	print_info(stack->info_b);
	ft_putendl("---------------------");
}
