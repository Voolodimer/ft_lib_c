/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyooden <hyooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 14:09:27 by hyooden           #+#    #+#             */
/*   Updated: 2020/05/08 17:02:46 by hyooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t n)
{
	char	*dst;
	char	*src;

	dst = (char *)dest;
	src = (char *)source;
	if (n > 0)
	{
		while (n-- > 0)
		{
			*dst++ = *src++;
		}
	}
	return (dst);
}
