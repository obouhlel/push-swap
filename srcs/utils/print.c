/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:04:36 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 22:48:36 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/**
 * Writes the string `str` to the file descriptor `fd`.
 *
 * @param str The string to write.
 * @param fd The file descriptor to write to.
 *
 * @return The number of bytes written, or -1 if an error occurred.
 */
int	ft_putstr_fd(char *str, int fd)
{
	return (write(fd, str, ft_strlen(str)));
}

/**
 * Writes the string `str` to the file descriptor `fd`, followed by a newline
 * character. Returns the number of characters written, or -1 if an error occurs.
 *
 * @param str The string to write to the file descriptor.
 * @param fd The file descriptor to write to.
 *
 * @return The number of characters written, or -1 if an error occurs.
 */
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

/**
 * Outputs the string `str` to the standard output,
 * followed by a newline character.
 *
 * @param str The string to output.
 * @return The number of characters outputted, or -1 if an error occurred.
 */
int	ft_putendl(char *str)
{
	return (ft_putendl_fd(str, 1));
}

/**
 * Prints the given string to the standard error output,
 * followed by a newline character.
 * 
 * @param str The string to be printed.
 * @return The number of characters printed, or -1 if an error occurred.
 */
int	ft_putendl_err(char *str)
{
	return (ft_putendl_fd(str, 2));
}
