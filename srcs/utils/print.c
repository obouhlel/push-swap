/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:04:36 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/17 16:11:20 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_putstr_fd(char *str, int fd)
{
	return (write(fd, str, ft_strlen(str)));
}

int	ft_putendl_fd(char *str, int fd)
{
	int	ret;

	ret = ft_putstr_fd(str, fd);
	if (ret == -1)
		return (-1);
	ret = ft_putstr_fd("\n", fd);
	if (ret == -1)
		return (-1);
	return (ret);
}

int	ft_putendl(char *str)
{
	return (ft_putendl_fd(str, 1));
}

int	ft_putendl_err(char *str)
{
	return (ft_putendl_fd(str, 2));
}
