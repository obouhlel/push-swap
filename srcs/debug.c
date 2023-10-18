/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:48:40 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/18 11:23:09 by obouhlel         ###   ########.fr       */
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
	printf("value =\t\t");
	while (i < size)
	{
		printf("%d\t", stack[i].value);
		i++;
	}
	printf("\nindex =\t\t");
	i = 0;
	while (i < size)
	{
		printf("%d\t", stack[i].index);
		i++;
	}
	printf("\npos =\t\t");
	i = 0;
	while (i < size)
	{
		printf("%d\t", stack[i].position);
		i++;
	}
	printf("\n");
}
