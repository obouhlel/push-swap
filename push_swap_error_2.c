/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_error_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:29:46 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/09 09:17:15 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	delete_value(int a)
{
	(void)a;
	a = 0;
}

void	free_nbrs_lst(char **nbrs, t_list **lst)
{
	int	i;

	i = 0;
	while (nbrs[i])
		free(nbrs[i++]);
	free(nbrs);
	if (lst)
		ft_lstclear(lst, &delete_value);
}

void	free_all_lst(t_list **lst_a, t_list **lst_b)
{
	if (*lst_a)
		ft_lstclear(lst_a, &delete_value);
	if (*lst_b)
		ft_lstclear(lst_b, &delete_value);
}

void	ft_create_lst_a(t_list **lst, char **nbrs, int n)
{
	int		i;
	t_list	*atoi;

	i = 0;
	atoi = NULL;
	while (i < n)
	{
		atoi = ft_lstnew(ft_atoi(nbrs[i]));
		if (!atoi)
		{
			free_nbrs_lst(nbrs, lst);
			ft_putendl_fd("Error", 1);
			exit(0);
		}
		ft_lstadd_front(lst, atoi);
		i++;
	}
}
