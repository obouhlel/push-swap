/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:41:57 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 22:47:17 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/**
 * Sets the first n bytes of the memory area pointed to by s to zero.
 *
 * @param s - pointer to the memory area to be zeroed
 * @param n - number of bytes to be zeroed
 */
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = 0;
}

/**
 * Copies n bytes from memory area src to memory area dst.
 *
 * @param dst The pointer to the destination array where 
 *            the content is to be copied.
 * @param src The pointer to the source of data to be copied.
 * @param n The number of bytes to be copied.
 */
void	ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	while (n--)
		*ptr_dst++ = *ptr_src++;
}

/**
 * Allocates memory for an array of `nmemb` elements of `size` bytes each and
 * returns a pointer to the allocated memory. The memory is set to zero using
 * `ft_bzero`.
 *
 * @param nmemb The number of elements to allocate memory for.
 * @param size The size of each element in bytes.
 * @return A pointer to the allocated memory, or NULL if the allocation fails.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
