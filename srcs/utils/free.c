/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:32:56 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 22:46:26 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/**
 * Frees the memory allocated to a pointer and sets it to NULL.
 *
 * @param ptr A pointer to the memory to be freed.
 */
void	ft_free(void **ptr)
{
	if (*ptr)
	{
		free(*ptr);
		*ptr = NULL;
	}
}

/**
 * Frees all the memory allocated for an array of pointers and sets them to NULL.
 * The array must be terminated by a NULL pointer.
 *
 * @param ptrs The array of pointers to free.
 */
void	ft_free_ptrs(void **ptrs)
{
	size_t	i;

	i = 0;
	if (!ptrs)
		return ;
	while (ptrs[i])
	{
		free(ptrs[i]);
		ptrs[i] = NULL;
		i++;
	}
	free(ptrs);
	ptrs = NULL;
}
