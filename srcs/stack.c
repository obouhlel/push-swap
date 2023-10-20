/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:36:56 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 23:24:06 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * Swaps the values of two integers.
 *
 * @param a - Pointer to the first integer.
 * @param b - Pointer to the second integer.
 */
static
void	swap_int(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * Finds the position of a given value in a sorted integer array.
 *
 * @param sorted_tab The sorted integer array to search in.
 * @param val The value to search for.
 * @param size The size of the sorted integer array.
 *
 * @return The position of the value in the sorted 
 *         integer array, or -1 if not found.
 */
static
int	found_pos(int *sorted_tab, int val, int size)
{
	int			i;

	i = 0;
	while (i < size)
	{
		if (sorted_tab[i] == val)
			return (i + 1);
		i++;
	}
	return (-1);
}

/**
 * Sorts an array of integers using the bubble sort algorithm.
 *
 * @param tab The array of integers to sort.
 * @param size The size of the array.
 *
 * @return A new array containing the sorted integers, 
 *         or NULL if memory allocation fails.
 */
void	bubble_sort(int *tab, int size, int sorted_tab[MAX_VALUE])
{
	int	i;
	int	j;

	i = -1;
	while (++i < size)
		sorted_tab[i] = tab[i];
	i = 0;
	while (i < size - 1)
	{
		j = size - 1;
		while (j > i)
		{
			if (sorted_tab[j] < sorted_tab[j - 1])
				swap_int(&sorted_tab[j], &sorted_tab[j - 1]);
			j--;
		}
		i++;
	}
}

/**
 * Initializes a stack with the given array of integers.
 *
 * @param stack    The stack to initialize.
 * @param tab      The array of integers to initialize the stack with.
 * @param nb_nbrs  The number of integers in the array.
 *
 * @return         Returns EXIT_SUCCESS if the stack was successfully 
 *                 initialized, or EXIT_FAILURE if an error occurred.
 */
int	init_stack(t_stack *stack, int *tab, int nb_nbrs)
{
	int	i;
	int	sorted_tab[MAX_VALUE];

	stack->a = ft_calloc(nb_nbrs, sizeof(t_stack));
	if (!stack->a)
		return (EXIT_FAILURE);
	stack->b = ft_calloc(nb_nbrs, sizeof(t_stack));
	if (!stack->b)
		return (EXIT_FAILURE);
	if (nb_nbrs >= MAX_VALUE)
		return (EXIT_FAILURE);
	ft_bzero(sorted_tab, MAX_VALUE);
	bubble_sort(tab, nb_nbrs, sorted_tab);
	i = -1;
	while (++i < nb_nbrs)
		stack->a[i] = found_pos(sorted_tab, tab[i], nb_nbrs);
	stack->info = (t_info){.size = nb_nbrs, .min = 1, .max = nb_nbrs,
		.med = sorted_tab[nb_nbrs / 2]};
	stack->info_a = (t_info){.size = nb_nbrs, .min = 1, .max = nb_nbrs,
		.med = sorted_tab[nb_nbrs / 2]};
	stack->info_b = (t_info){.size = 0, .min = 0, .max = 0, .med = 0};
	return (free(tab), EXIT_SUCCESS);
}

/**
 * @brief Frees the memory allocated for the stack and sets all its values to 0.
 * 
 * @param stack The stack to destroy.
 */
void	destroy_stack(t_stack *stack)
{
	if (stack->a)
		ft_free((void **)&stack->a);
	if (stack->b)
		ft_free((void **)&stack->b);
	ft_bzero(stack, sizeof(t_stack));
}
