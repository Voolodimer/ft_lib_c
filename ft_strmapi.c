/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyooden <hyooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 21:16:26 by hyooden           #+#    #+#             */
/*   Updated: 2020/05/15 21:26:47 by hyooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res_str;

	i = 0;
	res_str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (*s == '\0' || !f)
		return (NULL);
	if (res_str == NULL)
		return (0);
	while (s[i] != '\0')
	{
		res_str[i] = f(i, s[i]);
		i++;
	}
	res_str[i] = '\0';
	return (res_str);
}