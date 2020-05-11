/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyooden <hyooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 23:10:09 by hyooden           #+#    #+#             */
/*   Updated: 2020/05/08 17:01:59 by hyooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	char *ch;

	ch = dest;
	if (n > 0)
	{
		while (n > 0)
		{
			*ch = c;
			ch++;
			n--;
		}
	}
	return (dest);
}
