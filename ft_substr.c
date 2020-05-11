/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyooden <hyooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 15:52:24 by hyooden           #+#    #+#             */
/*   Updated: 2020/05/11 22:12:05 by hyooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			size;
	char			*substr;

	i = 0;
	size = ft_strlen(s);
	substr = malloc(len + 1);
	if (substr == 0)
		return (NULL);
	while (start < (unsigned int)size && i < (unsigned int)len)
	{
		substr[i++] = s[start++];
	}
	substr[i] = '\0';
	return (substr);
}
