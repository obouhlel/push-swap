/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrnbr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:50:08 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/16 11:51:35 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_putstrnbr_fd(char *str, int nbr, int fd)
{
	ft_putstr_fd(str, fd);
	ft_putnbr_fd(nbr, fd);
	ft_putchar_fd('\n', fd);
}
