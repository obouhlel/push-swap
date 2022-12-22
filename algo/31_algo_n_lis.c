/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   31_algo_n_lis.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:21:10 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/22 13:33:49 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_algo_lis_c(t_stack *stack_a)
{
	int	tmp;
	int	lis_c;

	tmp = stack_a->value;
	lis_c = 0;
	while (stack_a)
	{
		if (tmp < stack_a->value)
		{
			tmp = stack_a->value;
			lis_c++;
		}
		stack_a = stack_a->next;
	}
	return (lis_c);
}

static int	ft_algo_lis_d(t_stack *stack_a)
{
	int	tmp;
	int	lis_d;

	tmp = stack_a->value;
	lis_d = 0;
	while (stack_a)
	{
		if (tmp > stack_a->value)
		{
			tmp = stack_a->value;
			lis_d++;
		}
		stack_a = stack_a->next;
	}
	return (lis_d);
}

static void	ft_algo_lis_do_c(t_info *info)
{
	int	tmp;
	int	i;

	tmp = info->stack_a->value;
	i = 0;
	while (i < info->size_a)
	{
		if (tmp < info->stack_a->value)
		{
			tmp = info->stack_a->value;
			ra(info->stack_a);
		}
		else
			pb(info);
		i++;
	}
}

static void	ft_algo_lis_do_d(t_info *info)
{
	int	tmp;
	int	i;

	tmp = info->stack_a->value;
	i = 0;
	while (i < info->size_a)
	{
		if (tmp > info->stack_a->value)
		{
			tmp = info->stack_a->value;
			ra(info->stack_a);
		}
		else
			pb(info);
		i++;
	}
}

void	ft_algo_lis(t_info *info)
{
	int	lis_c;
	int	lis_d;

	lis_c = ft_algo_lis_c(info->stack_a);
	lis_d = ft_algo_lis_d(info->stack_a);
	if (lis_c >= lis_d)
		ft_algo_lis_do_c(info);
	else if (lis_d <= 5)
	{
		ft_algo_lis_do_d(info);
		ft_update_info(info);
		if (lis_d == 5 || lis_d == 4)
			ft_algo_5(info);
		else if (lis_d == 3)
			ft_algo_3(info);
		else if (lis_d == 2)
			sa(info->stack_a);
	}
	else
		ft_algo_lis_do_c(info);
}
