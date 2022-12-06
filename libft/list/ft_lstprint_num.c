/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint_num.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:57:20 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/06 16:58:18 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstprint_num(t_list *lst, int fd)
{
	while (lst)
	{
		ft_putnbr_fd(lst->content, fd);
		ft_putchar_fd('\n', fd);
		lst = lst->next;
	}
}
