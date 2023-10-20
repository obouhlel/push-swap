/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:05:10 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 20:25:41 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>
# include <unistd.h>

// PATH : ./srcs/utils/convertion.c
int		ft_atoi(const char *nptr);
long	ft_atol(const char *nptr);

// PATH : ./srcs/utils/free.c
void	ft_free(void **ptr);
void	ft_free_ptrs(void **ptrs);

// PATH : ./srcs/utils/print.c
int		ft_putstr_fd(char *str, int fd);
int		ft_putendl_fd(char *str, int fd);
int		ft_putendl(char *str);
int		ft_putendl_err(char *str);

// PATH : ./srcs/utils/split.c
char	**ft_split(char const *s, char c);

// PATH : ./srcs/utils/string.c
size_t	ft_strlen(char *str);

// PATH : ./srcs/utils/memory.c
void	ft_bzero(void *s, size_t n);
void	ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);

#endif