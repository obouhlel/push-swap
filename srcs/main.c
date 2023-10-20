/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:43:23 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 10:27:37 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data	data;
	int		*tab;
	int		nb_nbrs;

	ft_bzero(&data, sizeof(t_data));
	if (ac == 1)
		return (ERROR_ARGS_NUMBER);
	else if (ac == 2 && ft_strlen(av[1]) == 0)
		return (ft_putendl_err("Error"), ERROR_ARGS_EMPTY);
	nb_nbrs = ac - 1;
	tab = parsing(ac - 1, &av[1], &(nb_nbrs));
	if (!tab)
		return (ft_putendl_err("Error"), ERROR_PARSING);
	if (init_data(&data, tab, nb_nbrs) == EXIT_FAILURE)
		return (destroy_data(&data), ft_putendl_err("Error"), ERROR_INIT);
	if (sort(&data) == EXIT_FAILURE)
		return (destroy_data(&data), ft_putendl_err("Error"), ERROR_ALGO);
	destroy_data(&data);
	return (EXIT_SUCCESS);
}
