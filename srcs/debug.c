/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:48:40 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 12:08:23 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.h"
#include "utils.h"
#include <stdio.h>

void	print_stack(int *tab, int size)
{
	int		i;

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
	printf("size: %d\n", info.size);
	printf("min: %d\n", info.min);
	printf("max: %d\n", info.max);
	printf("med: %d\n", info.med);
}
