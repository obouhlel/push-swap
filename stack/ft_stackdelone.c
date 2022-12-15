/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:08:42 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/15 15:09:25 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//to delete one list
void	ft_stackdelone(t_stack *stack, void (*del)(int))
{
	if (!stack || !del)
		return ;
	del(stack->value);
	free(stack);
}
