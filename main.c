/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:43:23 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/08 11:38:18 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*lst_a;
	t_list	*lst_b;
	char	**nbrs;
	int		n;

	lst_a = NULL;
	lst_b = NULL;
	(void)lst_b;
	nbrs = ft_clear_av(&av[1], (ac - 1));
	n = 0;
	while (nbrs[n])
		n++;
	ft_error_push_swap_digit(nbrs);
	ft_error_push_swap_int(nbrs, n);
	ft_create_lst_a(&lst_a, nbrs, n);
	ft_error_push_swap_double(lst_a, nbrs);
	return (0);
}
