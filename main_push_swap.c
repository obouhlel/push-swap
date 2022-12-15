/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:43:23 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 15:02:40 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	main_error(char **nbrs, t_stack **stack_a)
{
	int	n;

	n = 0;
	while (nbrs[n])
		n++;
	ft_error_push_swap_digit(nbrs);
	ft_error_push_swap_int(nbrs, n);
	ft_create_stack_a(stack_a, nbrs, n);
	ft_error_push_swap_double((*stack_a), nbrs);
	free_nbrs_stack(nbrs, NULL);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**nbrs;

	stack_a = NULL;
	stack_b = NULL;
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
	main_error(nbrs, &stack_a);
	ft_algo_push_swap(&stack_a, &stack_b);
	return (0);
}
