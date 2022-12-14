/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_color.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:28:38 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/14 09:23:38 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_color(t_list *stack_a, t_list *stack_b)
{
	ft_putstr_fd("\033[0;31m", 1);
	ft_lstprint_num_fd(stack_a, 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("\033[0;32m", 1);
	ft_lstprint_num_fd(stack_b, 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('B', 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("\033[0m", 1);
}
