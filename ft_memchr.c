/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyooden <hyooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 23:25:16 by hyooden           #+#    #+#             */
/*   Updated: 2020/05/08 17:03:35 by hyooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	char	*array;
	int		i;

	i = 0;
	array = (char *)arr;
	while (n-- > 0)
	{
		if (array[i] == c)
			return ((void *)array + i);
		i++;
	}
	return (0);
}
