/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:31:15 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 22:50:17 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/**
 * Frees the memory allocated for the array of strings and returns NULL.
 * 
 * @param strs The array of strings to free.
 * @param j The number of strings in the array.
 * @return NULL.
 */
static
char	**error(char **strs, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

/**
 * Counts the number of words in a string separated by a given character.
 *
 * @param s The string to count the words in.
 * @param c The character used to separate the words.
 *
 * @return The number of words in the string.
 */
static
size_t	ft_nb_word(char const *s, char c)
{
	size_t	nb_word;
	size_t	i;

	i = 0;
	nb_word = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
			if (!s[i])
				return (nb_word);
		}
		while (!(s[i] == c) && s[i])
			i++;
		nb_word++;
	}
	return (nb_word);
}

/**
 * Returns the length of the word in the given string s
 * until the character c is encountered or the end of the string is reached.
 *
 * @param s The string to search for the word.
 * @param c The character to stop the search at.
 * @return The length of the word in the string.
 */
static
size_t	ft_strlen_word(const char *s, char c)
{
	size_t	i;
	size_t	lettre;

	i = 0;
	lettre = 0;
	while (s[i] && !(s[i] == c))
	{
		lettre++;
		i++;
	}
	return (lettre);
}

/**
 * @brief Duplicates a string of a given length.
 *
 * @param s The string to duplicate.
 * @param len The length of the string to duplicate.
 * @return A pointer to the duplicated string, or NULL if the allocation fails.
 */
static
char	*ft_strdup_split(const char *s, size_t len)
{
	char	*dup;
	size_t	i;

	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

/**
 * Splits a string into an array of substrings based on a delimiter character.
 *
 * @param s The string to split.
 * @param c The delimiter character.
 *
 * @return An array of substrings, or NULL if memory allocation fails.
 */
char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	j;

	strs = (char **)malloc(sizeof(char *) * (ft_nb_word(s, c) + 1));
	if (!strs)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_nb_word(s, c))
	{
		if (!(s[i] == c) && s[i])
		{
			strs[j] = ft_strdup_split(&s[i], ft_strlen_word(&s[i], c));
			if (!strs)
				return (error(strs, j));
			i += ft_strlen_word(&s[i], c);
			j++;
		}
		i++;
	}
	strs[j] = 0;
	return (strs);
}
