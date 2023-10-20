/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:19:55 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 22:43:10 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * Checks if a given character is a valid character for parsing.
 *
 * @param c The character to check.
 * @return TRUE if the character is valid, FALSE otherwise.
 */
static
int	is_a_valid_char(char c)
{
	const char	valid_chars[] = "0123456789+-";
	int			i;

	i = 0;
	while (valid_chars[i])
	{
		if (c == valid_chars[i])
			return (TRUE);
		i++;
	}
	return (FALSE);
}

/**
 * Checks if all the strings in the given array are valid numbers.
 * A valid number is a string that only contains digits and optional sign.
 * 
 * @param strs The array of strings to check.
 * @return TRUE if all the strings are valid numbers, FALSE otherwise.
 */
static
int	all_is_number(char **strs)
{
	int	i;
	int	j;

	i = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			if (!is_a_valid_char(strs[i][j]))
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}

/**
 * Creates an integer array from an array of string 
 * numbers after checking for overflow.
 *
 * @param strs_nbrs The array of string numbers to convert to integers.
 * @param nb_nbrs The number of string numbers in the array.
 * @return The integer array if successful, NULL otherwise.
 */
static
int	*check_overflow_and_creat_tab(char **strs_nbrs, int nb_nbrs)
{
	long	tmp;
	int		*tab;
	int		i;

	tab = malloc(sizeof(int) * nb_nbrs);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < nb_nbrs)
	{
		tab[i] = ft_atoi(strs_nbrs[i]);
		tmp = ft_atol(strs_nbrs[i]);
		if (tmp != (long)tab[i])
		{
			ft_free((void **)&tab);
			return (NULL);
		}
		i++;
	}
	return (tab);
}

/**
 * Checks if there are any duplicate integers in an array.
 * 
 * @param tab The array of integers to check for duplicates.
 * @param nb_nbrs The number of integers in the array.
 * @return TRUE if there are duplicates, FALSE otherwise.
 */
static
int	is_duplicate(int *tab, int nb_nbrs)
{
	int	i;
	int	j;

	i = 0;
	while (i < nb_nbrs)
	{
		j = i + 1;
		while (j < nb_nbrs)
		{
			if (tab[i] == tab[j])
				return (TRUE);
			j++;
		}
		i++;
	}
	return (FALSE);
}

/**
 * Parses the input arguments and returns an array of integers.
 * If the input is invalid, returns NULL.
 *
 * @param ac The number of arguments.
 * @param strs_nbrs The array of strings to be parsed.
 * @param nb_nbrs A pointer to the number of integers in the resulting array.
 * @return An array of integers, or NULL if the input is invalid.
 */
int	*parsing(int ac, char **strs_nbrs, int *nb_nbrs)
{
	int	*tab;

	if (ac == 1)
	{
		strs_nbrs = ft_split(strs_nbrs[0], ' ');
		if (!strs_nbrs)
			return (NULL);
		*nb_nbrs = 0;
		while (strs_nbrs[*nb_nbrs])
			*nb_nbrs += 1;
	}
	if (all_is_number(strs_nbrs) == FALSE)
	{
		if (ac == 1)
			ft_free_ptrs((void **)strs_nbrs);
		return (NULL);
	}
	tab = check_overflow_and_creat_tab(strs_nbrs, *nb_nbrs);
	if (ac == 1)
		ft_free_ptrs((void **)strs_nbrs);
	if (!tab)
		return (NULL);
	if (is_duplicate(tab, *nb_nbrs) == TRUE)
		return (ft_free((void **)&tab), NULL);
	return (tab);
}
