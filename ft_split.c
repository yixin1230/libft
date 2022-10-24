/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 19:56:59 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/24 18:49:14 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static size_t	count_str(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	if (ft_strchr(s, c) == NULL || !c)
		return (1);
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c && i > 0)
			count++;
		if (s[i] != c && s[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

static char	**free_error(char **p)
{
	size_t	i;

	i = 0;
	while (p[i])
	{
		free (p[i]);
		i++;
	}
	free (p);
	return (NULL);
}

static char	**ft_cal(const char *s, char **p, char c, size_t count)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		else if (s[i] == c && s[i - 1] != c && i > 0)
		{
			p[j] = ft_calloc(count + 1, sizeof(char));
			count = 0;
			j++;
		}
		if (s[i + 1] == '\0' && s[i] != c)
			p[j] = ft_calloc(count + 1, sizeof(char));
		i++;
	}
	return (p);
}

static char	**ft_cpy(const char *s, char **p, char c, size_t count)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		else if (s[i] == c && s[i - 1] != c && i > 0)
		{
			p[j] = ft_memmove(p[j], s + i - count, count);
			count = 0;
			j++;
		}
		if (s[i + 1] == '\0' && s[i] != c)
			p[j] = ft_memmove(p[j], s + i - count + 1, count);
		i++;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**p;

	count = 0;
	if (!s)
		return (NULL);
	p = ft_calloc(count_str(s, c) + 1, sizeof(char *));
	if (!p)
		return (NULL);
	p = ft_cal(s, p, c, count);
	if (!p)
		free_error(p);
	else
		ft_cpy(s, p, c, count);
	return (p);
}

/* int main(void)
{
	char	**s;
	s = ft_split(" 012 3 4 5 6   89   ",' ');
	for(size_t	i = 0; i < 6;i++)
		printf("s:%s\n",s[i]);
	for(size_t	i = 0; i < 6;i++)
		free(s[i]);

	char	**s1;
	s1 = ft_split("      split       this for   me  !       ",' ');
	for(size_t	i = 0; i < 5;i++)
		printf("s1:%s\n",s1[i]);
	for(size_t	i = 0; i < 5;i++)
		free(s1[i]);
	
	char	**s2;
	s2 = ft_split("                  olol",' ');
	for(size_t	i = 0; i < 1;i++)
		printf("s2:%s\n",s2[i]);
	for(size_t	i = 0; i < 1;i++)
		free(s2[i]);

	char	**s3;
	s3 = ft_split("olol        ",' ');
	for(size_t	i = 0; i < 1;i++)
		printf("s3:%s\n",s3[i]);
	for(size_t	i = 0; i < 1;i++)
		free(s3[i]);

	char	**s4;
	s4 = ft_split("hello!",' ');
	for(size_t	i = 0; i < 1;i++)
		printf("s4:%s\n",s4[i]);
	for(size_t	i = 0; i < 1;i++)
		free(s4[i]);

	char	**s5;
	s5 = ft_split("xxxxxxxxhello!",'x');
	for(size_t	i = 0; i < 1;i++)
		printf("s5:%s\n",s5[i]);
	for(size_t	i = 0; i < 1;i++)
		free(s5[i]);	
}  */