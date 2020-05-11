/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyooden <hyooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 18:14:57 by hyooden           #+#    #+#             */
/*   Updated: 2020/05/11 20:50:12 by hyooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>


int		main()
{
	char *s;
	char *w;
	
	s = "hello";
	w = "world";
	
	printf("%s" ,ft_strjoin(s, w));
}
