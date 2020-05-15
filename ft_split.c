/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyooden <hyooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 23:19:05 by hyooden           #+#    #+#             */
/*   Updated: 2020/05/15 17:11:38 by hyooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_count(char const *s, char c)
{
	int		wc;
	int		i;

	i = 0;
	wc = 0;
	if (s[0] != c)
		wc = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c)
			wc++;
		i++;
	}
	return (wc);
}

static char		*word_build(char const *s, char c, int i)
{
	int		start;
	int		j;
	char	*res_str;

	start = i;
	j = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	res_str = (char *)malloc(sizeof(char) * ((i - start) + 1));
	if (!res_str)
		return (NULL);
	while (start != i)
		res_str[j++] = s[start++];
	res_str[j] = '\0';
	return (res_str);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**res;
	int		len_s;

	i = 0;
	j = 0;
	len_s = ft_strlen(s);
	res = (char **)malloc(sizeof(char *) * (size_t)(word_count(s, c) + 1));
	if (!res || !s)
		return (NULL);
	while (i <= len_s)
	{
		if (ft_strlen(word_build(s, c, i)))
		{
			res[j] = word_build(s, c, i);
			i += ft_strlen(res[j++]);
		}
		else
			i++;
	}
	res[j] = NULL;
	return (res);
}
