/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyooden <hyooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 17:39:40 by hyooden           #+#    #+#             */
/*   Updated: 2020/05/10 19:05:46 by hyooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void *res;

	res = malloc(num * size);
	if (res == 0)
		return (NULL);
	if (res)
		ft_bzero(res, num * size);
	return (res);
}
