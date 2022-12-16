/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_error_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:29:46 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/16 11:32:09 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	delete_value(int a)
{
	(void)a;
	a = 0;
}

void	free_nbrs_stack(char **nbrs, t_stack **stack)
{
	int	i;

	i = 0;
	while (nbrs[i])
		free(nbrs[i++]);
	free(nbrs);
	if (stack)
		if (*stack)
			ft_stackclear(stack, &delete_value);
}

void	free_all_stack(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a)
		ft_stackclear(stack_a, &delete_value);
	if (stack_b)
		ft_stackclear(stack_b, &delete_value);
}

void	free_info(t_info *info)
{
	if (info->stack_a[0])
		ft_stackclear(info->stack_a, &delete_value);
	if (info->stack_b[0])
		ft_stackclear(info->stack_b, &delete_value);
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
		atoi = ft_stacknew(ft_atoi(nbrs[i]));
		if (!atoi)
		{
			free_nbrs_stack(nbrs, stack);
			ft_putendl_fd("Error", 1);
			exit(0);
		}
		ft_stackadd_front(stack, atoi);
		i++;
	}
}
