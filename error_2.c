/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:29:46 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/08 11:37:34 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	delete(int a)
{
	(void)a;
	a = 0;
}

void	ft_create_lst_a(t_list **lst, char **nbrs, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_lstadd_back(&(*lst), ft_lstnew(ft_atoi(nbrs[i])));
		if (!(*lst))
		{
			free_error_free(nbrs, *lst);
			ft_putendl_fd("Error", 1);
			exit(0);
		}
		i++;
	}
}
