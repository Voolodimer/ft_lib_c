/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyooden <hyooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 17:25:49 by hyooden           #+#    #+#             */
/*   Updated: 2020/05/08 17:22:35 by hyooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int num_char)
{
	int		i;
	char	*ptr;

	ptr = (char *)str;
	i = ft_strlen(str);
	if (i == 0)
		return (NULL);
	while (i >= 0)
	{
		if (str[i] == num_char)
			return (char*)(str + i);
		i--;
	}
	return (NULL);
}
