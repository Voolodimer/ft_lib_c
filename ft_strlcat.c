/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyooden <hyooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:16:30 by hyooden           #+#    #+#             */
/*   Updated: 2020/05/11 18:48:26 by hyooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	size_dest;
	size_t	size_src;
	size_t	free_size;
	int		i;

	i = 0;
	size_dest = (size_t)ft_strlen(dest);
	size_src = (size_t)ft_strlen(src);
	free_size = size - size_dest;
	if (free_size > 0 && size > size_dest)
	{
		while (src[i] != '\0' && (int)size_dest < (int)size)
			dest[(int)size_dest++] = src[i++];
		dest[(int)size_dest] = '\0';
		return (size_dest + size_src);
	}
	return (size + size_src);
}
