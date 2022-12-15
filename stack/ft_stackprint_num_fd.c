/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackprint_num_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:08:59 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 15:09:32 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_stackprint_num_fd(t_stack *stack, int fd)
{
	if (stack == NULL)
		ft_putendl_fd("(null)", 1);
	while (stack)
	{
		ft_putnbr_fd(stack->value, fd);
		ft_putchar_fd('\n', fd);
		stack = stack->next;
	}
}
