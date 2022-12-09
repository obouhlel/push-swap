/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:43:23 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/09 08:06:40 by obouhlel         ###   ########.fr       */
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
	if (ac == 1)
	{
		ft_putendl_fd("Error", 1);
		return (0);
	}
	nbrs = ft_clear_av(&av[1], (ac - 1));
	n = 0;
	while (nbrs[n])
		n++;
	ft_error_push_swap_digit(nbrs);
	ft_error_push_swap_int(nbrs, n);
	ft_create_lst_a(&lst_a, nbrs, n);
	ft_error_push_swap_double(lst_a, nbrs);
	ft_lstprint_num(lst_a, 1);
	free_all(nbrs, &lst_a);
	return (0);
}
