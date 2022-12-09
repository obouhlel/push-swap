/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:43:23 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/09 18:15:10 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	main_error(char **nbrs, t_list **lst_a)
{
	int	n;

	n = 0;
	while (nbrs[n])
		n++;
	ft_error_push_swap_digit(nbrs);
	ft_error_push_swap_int(nbrs, n);
	ft_create_lst_a(lst_a, nbrs, n);
	ft_error_push_swap_double((*lst_a), nbrs);
	free_nbrs_lst(nbrs, NULL);
}

int	main(int ac, char **av)
{
	t_list	*lst_a;
	t_list	*lst_b;
	char	**nbrs;

	lst_a = NULL;
	lst_b = NULL;
	nbrs = NULL;
	if (ac == 1)
	{
		ft_putendl_fd("Error", 1);
		return (0);
	}
	nbrs = ft_clear_av(&av[1], (ac - 1));
	if (!nbrs)
	{
		ft_putendl_fd("Error", 1);
		return (0);
	}
	main_error(nbrs, &lst_a);
	ft_algo_push_swap(&lst_a, &lst_b);
	return (0);
}
