/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:49:42 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/07 19:22:24 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//to joint two string
char	*ft_strjoin(char *s1, char *s2)
{
	char	*s;
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	s = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!s)
		return (NULL);
	s[0] = 0;
	i = 0;
	while (i < len_s1)
	{
		s[i] = s1[i];
		i++;
	}
	while (i < (len_s1 + len_s2))
	{
		s[i] = s2[i - len_s1];
		i++;
	}
	s[i] = 0;
	return (s);
}
