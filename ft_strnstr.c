/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyooden <hyooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 16:43:49 by hyooden           #+#    #+#             */
/*   Updated: 2020/05/08 16:33:04 by hyooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len_search)
{
	size_t i;
	size_t j;

	i = 0;
	if (ft_strlen(s2) == 0 || s1 == s2)
		return (char *)s1;
	while (s1[i] != '\0' || i < len_search)
	{
		if (s1[i] == s2[0])
		{
			j = 0;
			while (s2[j] != '\0' && (j + i) < len_search
				&& s1[i + j] != '\0' && s1[i + j] == s2[j])
			{
				if (s2[j + 1] == '\0')
					return ((char*)s1 + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
