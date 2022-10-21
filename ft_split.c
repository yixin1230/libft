/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 19:56:59 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/21 19:27:04 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

size_t	count_str(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (ft_strchr(s, c) == NULL)
		return (0);
	if (!s || !c)
		return (0);
	while (s[i])
	{
		if (s[i] != c  && s[i + 1] == c && s[i + 1] != '\0')
			count++;
		i++;
	}
	if (s[i] != c && s[i] == '\0' && s[i - 1] != c)
		count++;
	return (count);
}

char	**cpy_str(char const *s, char **dst, char c)
{
	size_t	i;
	size_t	j;
	size_t	h;

	i = 0;
	j = 0;
	h = 0;
	while (s[i])
	{
		while (s[i] != c)
		{
			dst[j][h] = s[i];
			h++;
			i++;
			if (s[i] == c && s[i + 1] != c)
				j++;
		}
		h = 0;
		i++;
	}
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;
	char	**p;

	i = 0;
	j = 0;
	count = 0;
/* 	if (!s)
		p = ft_calloc(1, sizeof(char *));
	if (!*s)
		return (NULL); */
	p = ft_calloc(count_str(s, c) + 1, sizeof(char *));
	if (!p)
		return (0);
	while (s[i])
	{
		while (s[i + count] != c)
		{
			count++;
		}
			if (s[i + count] == c && s[i + count + 1] != c )
			{
				p[j] = ft_calloc(count + 1, sizeof(char));
				j++;
			}
		i++;
		count = 0;

	}
	cpy_str(s, p, c);
	return (p);
} 

int main(void)
{
	char	**p2;

	p2 = ft_split("ghfjgf t yf uyft ",' ');
/* 	p2 = ft_split("      split       this for   me  !       ",' ');
	p2 = ft_split("                  olol",' ');
	p2 = ft_split("olol        ",' '); */
	for(int	i = 0; i<5;i++)
		printf("%s\n",p2[i]);
	for(int	i = 0; i<5;i++)
		free(p2[i]);
}