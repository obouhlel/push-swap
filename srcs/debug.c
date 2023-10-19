/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:48:40 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/19 11:14:22 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_stack(t_stack *stack, int size)
{
	int		i;

	printf("size = %d\n", size);
	if (size == 0)
		return ((void)ft_putendl("Stack is empty"));
	i = 0;
	printf("val =\t\t");
	while (i < size)
	{
		printf("%d\t", stack[i].val);
		i++;
	}
	printf("\npos =\t\t");
	i = 0;
	while (i < size)
	{
		printf("%d\t", stack[i].pos);
		i++;
	}
	printf("\n");
}

void	print_info(t_info info)
{
	printf("min = %d\n", info.min.val);
	printf("max = %d\n", info.max.val);
	printf("median = %d\n", info.med.val);
}
