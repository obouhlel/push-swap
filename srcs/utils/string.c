/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:07:49 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/22 11:21:18 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/**
 * Returns the length of the given string.
 *
 * @param str The string to get the length of.
 * @return The length of the string.
 */
size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


/**
 * Compares two strings lexicographically.
 *
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 *
 * @return An integer greater than, equal to, or less than 0, according to
 *         whether s1 is greater than, equal to, or less than s2.
 *         If either s1 or s2 is NULL, returns -1.
 */
int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	if (!s1 || !s2)
		return (-1);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
