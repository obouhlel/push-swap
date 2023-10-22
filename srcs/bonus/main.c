/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:54:03 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/22 11:23:17 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int ac, char **av)
{
	t_stack	stack;
	int		*tab;
	int		nb_nbrs;

	ft_bzero(&stack, sizeof(t_stack));
	if (ac == 1)
		return (ERROR_ARGS_NUMBER);
	else if (ac == 2 && ft_strlen(av[1]) == 0)
		return (ft_putendl_err("Error"), ERROR_ARGS_EMPTY);
	nb_nbrs = ac - 1;
	tab = parsing(ac - 1, &av[1], &(nb_nbrs));
	if (!tab)
		return (ft_putendl_err("Error"), ERROR_PARSING);
	if (init_stack(&stack, tab, nb_nbrs) == EXIT_FAILURE)
		return (destroy_stack(&stack), ft_putendl_err("Error"), ERROR_INIT);
	if (checker(&stack) == EXIT_FAILURE)
		return (destroy_stack(&stack), ft_putendl_err("Error"), ERROR_CHECKER);
	destroy_stack(&stack);
	return (EXIT_SUCCESS);
}
