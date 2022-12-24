/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_error_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:29:46 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/24 12:40:27 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	free_nbrs_stack(char **nbrs, t_stack *stack)
{
	int	i;

	i = 0;
	while (nbrs[i])
		free(nbrs[i++]);
	free(nbrs);
	if (stack)
		ft_stack_clear(stack);
}

void	free_all_stack(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a)
		ft_stack_clear(stack_a);
	if (stack_b)
		ft_stack_clear(stack_b);
}

void	free_info(t_info *info)
{
	if (info->stack_a)
		ft_stack_clear(info->stack_a);
	if (info->stack_b)
		ft_stack_clear(info->stack_b);
	if (info)
		free(info);
}

void	ft_create_stack_a(t_stack **stack, char **nbrs, int n)
{
	int		i;
	t_stack	*atoi;

	i = 0;
	atoi = NULL;
	while (i < n)
	{
		atoi = ft_stack_new(ft_atoi(nbrs[i]));
		if (!atoi)
		{
			free_nbrs_stack(nbrs, *stack);
			ft_putendl_fd("Error", 1);
			exit(0);
		}
		ft_stack_add_front(stack, atoi);
		i++;
	}
}
