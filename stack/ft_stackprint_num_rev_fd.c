/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackprint_num_rev_fd.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:09:05 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 15:09:34 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_stackprint_num_rev_fd(t_stack *stack, int fd)
{
	while (stack)
	{
		ft_putnbr_fd(stack->value, fd);
		ft_putchar_fd('\n', fd);
		stack = stack->previous;
	}
}
