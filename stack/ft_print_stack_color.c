/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack_color.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:46:06 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/17 17:25:17 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_print_stack_color(t_stack *stack_a, t_stack *stack_b)
{
	ft_putstr_fd("\033[0;31m", 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("\n---------------STACK A---------------\n\n", 1);
	ft_stack_print_num_fd(stack_a, 1);
	ft_putstr_fd("\n---------------STACK A---------------\n", 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("\033[0;32m", 1);
	ft_putstr_fd("\n---------------STACK B---------------\n\n", 1);
	ft_stack_print_num_fd(stack_b, 1);
	ft_putstr_fd("\n---------------STACK B---------------\n", 1);
	ft_putstr_fd("\033[0m", 1);
}
