/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:19:55 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/17 18:38:04 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_a_valid_char(char c)
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

static int	all_is_number(char **strs)
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

static int	*check_overflow_and_creat_tab(char **strs_nbrs, int nb_nbrs)
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
