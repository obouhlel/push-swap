/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint_num_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:57:20 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/10 11:40:55 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstprint_num_fd(t_list *lst, int fd)
{
	if (lst == NULL)
		ft_putendl_fd("(null)", 1);
	while (lst)
	{
		ft_putnbr_fd(lst->value, fd);
		ft_putchar_fd('\n', fd);
		lst = lst->next;
	}
}
