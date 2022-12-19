/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_print_num_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:47:03 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/19 14:29:23 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_stack_print_num_fd(t_stack *stack, int fd)
{
	if (stack == NULL)
		ft_putendl_fd("\t\t(null)", 1);
	while (stack)
	{
		ft_putstr_fd("| ", 1);
		ft_putnbr_fd(stack->value, fd);
		ft_putstr_fd("\t| id = ", fd);
		ft_putnbr_fd(stack->id, fd);
		ft_putstr_fd("\tpos = ", fd);
		ft_putnbr_fd(stack->pos, fd);
		// ft_putstr_fd(", rx = ", fd);
		// ft_putnbr_fd(stack->rotate, fd);
		// ft_putstr_fd(", rrx = ", fd);
		// ft_putnbr_fd(stack->rotate_reverse, fd);
		ft_putchar_fd('\n', fd);
		stack = stack->next;
	}
}
