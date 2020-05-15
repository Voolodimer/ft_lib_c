/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyooden <hyooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 15:45:01 by hyooden           #+#    #+#             */
/*   Updated: 2020/05/15 17:12:04 by hyooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_of_int(int n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		len = 1;
		n *= -1;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*res_str;
	int		len_n;

	len_n = len_of_int(n);
	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	if (!(res_str = (char *)malloc(sizeof(char) * (len_n + 1))))
		return (NULL);
	if (n < 0)
	{
		res_str[0] = '-';
		n *= -1;
	}
	res_str[len_n--] = '\0';
	while (n != 0)
	{
		res_str[len_n] = (n % 10) + '0';
		n /= 10;
		len_n--;
	}
	return (res_str);
}
