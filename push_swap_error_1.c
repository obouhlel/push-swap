/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_error_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:45:33 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/09 09:17:15 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_clear_av(char **av, int n)
{
	char	**nbrs;
	char	*nbr;
	char	*tmp;
	int		i;

	nbrs = NULL;
	nbr = NULL;
	tmp = NULL;
	i = 0;
	while (i < n)
	{
		tmp = ft_strjoin(av[i], " ");
		if (!tmp)
			return (free(nbr), free(tmp), NULL);
		nbr = ft_strjoin_free(tmp, nbr);
		if (!nbr)
			return (free(nbr), free(tmp), NULL);
		i++;
	}
	nbrs = ft_split(nbr, ' ');
	free(nbr);
	return (nbrs);
}

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
				free_nbrs_lst(strs, NULL);
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
			free_nbrs_lst(nstr, NULL);
			exit(0);
		}
		i++;
	}
}

void	ft_error_push_swap_double(t_list *lst, char **nbrs)
{
	t_list	*lstcmp;
	int		tmp;

	while (lst)
	{
		tmp = lst->value;
		lstcmp = lst->next;
		while (lstcmp)
		{
			if (lstcmp->value == tmp)
			{
				ft_putendl_fd("Error", 1);
				free_nbrs_lst(nbrs, &lst);
				exit(0);
			}
			lstcmp = lstcmp->next;
		}
		lst = lst->next;
	}
}
