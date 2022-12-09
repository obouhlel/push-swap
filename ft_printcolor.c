/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcolor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:37:51 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/09 09:58:19 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_color(t_list *lst_a, t_list *lst_b)
{
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("\033[0;32m", 1);
	ft_lstprint_num(lst_b, 1);
	ft_putstr_fd("\tB\n\n\033[0;31m", 1);
	ft_lstprint_num(lst_a, 1);
	ft_putstr_fd("\tA\n\033[0;37m", 1);
}
