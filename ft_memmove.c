/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyooden <hyooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 16:10:19 by hyooden           #+#    #+#             */
/*   Updated: 2020/05/08 17:05:29 by hyooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t n)
{
	char	*dst;
	char	*src;
	size_t	i;

	i = 0;
	dst = (char *)dest;
	src = (char *)source;
	if (src > dst)
	{
		while (i < n)
		{
			*dst++ = *src++;
			i++;
		}
	}
	else
		while (++i <= n)
		{
			dst[n - i] = src[n - i];
		}
	return (dst);
}
