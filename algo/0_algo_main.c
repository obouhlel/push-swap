/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_algo_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:55:14 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/16 15:56:41 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algo_push_swap(t_stack *stack_a, t_stack *stack_b)
{
	t_info	*info;

	info = ft_init_info(stack_a, stack_b);
	ft_print_info(info);
	ft_swap(stack_a);
	free_info(info);
}
