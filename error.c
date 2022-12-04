/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:45:33 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/04 16:06:31 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_push_swap_digit(char **strs)
{
	int	i;
	int	j;

	i = 0;
	while (strs[i])
	{
		j = 0;
		if (strs[i][0] == '-')
			j++;
		while (strs[i][j])
		{
			if (!ft_isdigit(strs[i][j]))
			{
				ft_putendl_fd("Error", 1);
				exit(0);
			}
			j++;
		}
		i++;
	}
}

void	ft_error_push_swap_int(char **nstr, int n)
{
	int		i;
	ssize_t	atoi_long;
	int		atoi;

	i = 0;
	while (i < n)
	{
		atoi = ft_atoi(nstr[i]);
		atoi_long = ft_atoi_long(nstr[i]);
		if (atoi != atoi_long)
		{
			ft_putendl_fd("Error", 1);
			exit(0);
		}
		i++;
	}
}

void	ft_error_push_swap_double(t_list *lst)
{
	t_list	*lstcmp;
	int		tmp;

	while (lst)
	{
		tmp = lst->content;
		lstcmp = lst->next;
		while (lstcmp)
		{
			if (lstcmp->content == tmp)
			{
				ft_putendl_fd("Error", 1);
				exit(0);
			}
			lstcmp = lstcmp->next;
		}
		lst = lst->next;
	}
}
