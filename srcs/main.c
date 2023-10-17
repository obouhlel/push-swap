/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:43:23 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/17 16:26:45 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		ft_putendl_err("Error");
		return (ERROR_ARGS_NUMBER);
	}
	else if (ac == 2)
	{
		if (ft_strlen(av[1]) == 0)
		{
			ft_putendl_err("Error");
			return (ERROR_ARGS_EMPTY);
		}
	}
	if (parsing(ac - 1, &av[1]) == EXIT_FAILURE)
	{
		ft_putendl_err("Error");
		return (ERROR_PARSING);
	}
	return (EXIT_SUCCESS);
}
