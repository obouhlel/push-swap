/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:43:23 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/06 16:52:37 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	t_list	*lst_a;
	t_list	*lst_b;

	lst_a = NULL;
	lst_b = NULL;
	ft_error_push_swap_digit(&av[1]);
	ft_error_push_swap_int(&av[1], (ac - 1));
	i = 1;
	while (i < ac)
		ft_lstadd_back(&lst_a, ft_lstnew(ft_atoi(av[i++])));
	ft_error_push_swap_double(lst_a);
	
	ft_algo_push_swap(&lst_a, &lst_b);
	return (0);
}
