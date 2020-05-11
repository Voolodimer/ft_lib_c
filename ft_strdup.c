/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyooden <hyooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 18:05:47 by hyooden           #+#    #+#             */
/*   Updated: 2020/05/10 19:02:39 by hyooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	void	*ptr;
	int		size;

	size = ft_strlen(str);
	ptr = malloc(size + 1);
	if (ptr == 0)
		return (NULL);
	ft_strlcpy(ptr, str, size);
	return (ptr);
}
