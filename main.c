/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyooden <hyooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 18:14:57 by hyooden           #+#    #+#             */
/*   Updated: 2020/05/15 20:29:33 by hyooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static char	func(unsigned int num, char c)
{
	c += num;
	return (c); 
}

int		main()
{
	//int		i;
	char	*result;
	//char	*c;

	//i = 0;
	result = ft_strmapi("abcde", &func);
	printf("%s" ,result);
}
