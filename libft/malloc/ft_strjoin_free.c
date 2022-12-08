/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:49:42 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/08 11:03:21 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//to joint two string
char	*ft_strjoin_free(char *s1, char *s2)
{
	char	*s;
	size_t	len_s1;
	size_t	len_s2;
	int		i;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	s = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!s)
		return (NULL);
	s[0] = 0;
	i = -1;
	while (++i < (int)len_s1)
		s[i] = s1[i];
	while (i < (int)(len_s1 + len_s2))
	{
		s[i] = s2[i - len_s1];
		i++;
	}
	s[i] = 0;
	if (s1)
		free(s1);
	if (s2)
		free(s2);
	return (s);
}
