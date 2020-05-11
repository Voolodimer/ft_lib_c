/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyooden <hyooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 12:54:55 by hyooden           #+#    #+#             */
/*   Updated: 2020/05/08 17:06:40 by hyooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int ch)
{
	if ((ch > 'a' && ch < 'z') || (ch > 'A' && ch < 'Z'))
		return (1);
	return (0);
}
