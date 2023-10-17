/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:32:56 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/17 16:35:22 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_free(void **ptr)
{
	if (*ptr)
	{
		free(*ptr);
		*ptr = NULL;
	}
}

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
