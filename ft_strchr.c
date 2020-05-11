/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyooden <hyooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 14:25:11 by hyooden           #+#    #+#             */
/*   Updated: 2020/05/08 17:22:55 by hyooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int num_char)
{
	int		len_str;
	int		i;

	i = 0;
	len_str = ft_strlen(str);
	if (len_str == 0)
		return (NULL);
	while (i < len_str)
	{
		if (str[i] == num_char)
			return (void*)(str + i);
		i++;
	}
	return (NULL);
}
