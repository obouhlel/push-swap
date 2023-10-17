/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:48:40 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/17 20:19:21 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_data(t_data *data)
{
	int	i;

	i = 0;
	while (data->stack_a && i < data->size_a)
	{
		printf("data->stack_a = {%d, %d, %d}\n", data->stack_a[i].value, \
		data->stack_a[i].index, data->stack_a[i].position);
		i++;
	}
	i = 0;
	while (data->stack_b && i < data->size_b)
	{
		printf("data->stack_b = {%d, %d, %d}\n", data->stack_b->value, \
		data->stack_b->index, data->stack_b->position);
		i++;
	}
	i = 0;
	while (i < data->nb_nbrs)
	{
		printf("data->tab[%d] = %d\n", i, data->tab[i]);
		i++;
	}
	i = 0;
	while (i < data->nb_nbrs)
	{
		printf("data->sorted_tab[%d] = %d\n", i, data->sorted_tab[i]);
		i++;
	}
	printf("data->nb_nbrs = %d\n", data->nb_nbrs);
	printf("data->size_a = %d\n", data->size_a);
	printf("data->size_b = %d\n", data->size_b);
}
