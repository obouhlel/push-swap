/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:43:23 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/17 20:16:50 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data	data;

	ft_bzero(&data, sizeof(t_data));
	if (ac == 1)
		return (ERROR_ARGS_NUMBER);
	else if (ac == 2 && ft_strlen(av[1]) == 0)
		return (ft_putendl_err("Error"), ERROR_ARGS_EMPTY);
	data.nb_nbrs = ac - 1;
	data.tab = parsing(ac - 1, &av[1], &(data.nb_nbrs));
	if (!data.tab)
		return (ft_putendl_err("Error"), ERROR_PARSING);
	if (init_data(&data) == EXIT_FAILURE)
		return (ft_putendl_err("Error"), ERROR_INIT);
	print_data(&data);
	destroy_data(&data);
	return (EXIT_SUCCESS);
}
