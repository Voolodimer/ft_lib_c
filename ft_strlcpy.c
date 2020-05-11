/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyooden <hyooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 14:49:00 by hyooden           #+#    #+#             */
/*   Updated: 2020/05/02 20:02:42 by hyooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t i;
	size_t res_src;

	i = 0;
	res_src = ft_strlen(src);
	if (!dst || !src)
		return (0);
	while (src[i] != '\0' && i < dst_size)
	{
		dst[i] = src[i];
		i++;
	}
	if (dst_size < res_src)
		dst[dst_size - 1] = '\0';
	if (dst_size != 0)
		dst[i] = '\0';
	return (res_src);
}
