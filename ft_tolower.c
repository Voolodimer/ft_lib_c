/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyooden <hyooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 16:12:54 by hyooden           #+#    #+#             */
/*   Updated: 2020/05/08 17:02:20 by hyooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (ch + 32);
	return (ch);
}