/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint_num_revfd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:17:00 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/09 14:23:07 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstprint_num_rev_fd(t_list *lst, int fd)
{
	while (lst)
	{
		ft_putnbr_fd(lst->value, fd);
		ft_putchar_fd('\n', fd);
		lst = lst->previous;
	}
}