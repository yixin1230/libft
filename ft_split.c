/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 19:56:59 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/31 14:12:38 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

static size_t	count_str(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
			count++;
		i++;
	}
	return (count);
}

static	size_t	count_str_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (*s == c)
		s++;
	while (*s != c && *s)
	{
		i++;
		s++;
	}
	return (i);
}

static void	free_error(char **p, size_t nb)
{
	size_t	i;

	i = 0;
	while (i <= nb)
	{
		free (p[i]);
		i++;
	}
	free (p);
}

static char	**ft_cpy(const char *s, char **p, char c, size_t nb)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	s_len;

	i = 0;
	j = 0;
	s_len = ft_strlen(s);
	while (j < nb)
	{
		while (s[i] == c && i < s_len)
			i++;
		len = count_str_len(&s[i], c);
		p[j] = ft_substr(s, i, len);
		if (!p[j])
		{
			free_error(p, nb);
			return (NULL);
		}
		i += len;
		j++;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	nb;

	if (!s)
		return (NULL);
	nb = count_str(s, c);
	p = ft_calloc(nb + 1, sizeof(char *));
	if (!p)
		return (NULL);
	p = ft_cpy(s, p, c, nb);
	return (p);
}

/* int main(void)
{
	char	**s;
	s = ft_split(" 012 3 4 5 6   89   ",' ');
	for(size_t	i = 0; i < 6;i++)
		printf("s:%s\n",s[i]);

	char	**s1;
	s1 = ft_split("      split       this for   me  !       ",' ');
	for(size_t	i = 0; i < 5;i++)
		printf("s1:%s\n",s1[i]);
	
	char	**s2;
	s2 = ft_split("                  olol",' ');
	for(size_t	i = 0; i < 1;i++)
		printf("s2:%s\n",s2[i]);

	char	**s3;
	s3 = ft_split("olol        ",' ');
	for(size_t	i = 0; i < 1;i++)
		printf("s3:%s\n",s3[i]);

	char	**s4;
	s4 = ft_split("hello!",' ');
	for(size_t	i = 0; i < 1;i++)
		printf("s4:%s\n",s4[i]);

	char	**s5;
	s5 = ft_split("xxxxxxxxhello!",'x');
	for(size_t	i = 0; i < 1;i++)
		printf("s5:%s\n",s5[i]);

	char	**s6;
	s6 = ft_split("",'x');
	for(size_t	i = 0; i < 1;i++)
	printf("s6:sting%zu:%s\n",i,s6[i]);

	char	**s7;
	s7 = ft_split("\0aa\0bbb",'\0');
	for(size_t	i = 0; i < 1;i++)
	printf("s7:sting%zu:%s\n",i,s7[i]);
}  */

/* static void	ft_free2m(char	**data, size_t word)
{
	size_t	i;

	i = 0;
	while (i <= word)
	{
		if (data[i])
			free(data[i]);
		i++;
	}
	free(data);
}
 */
