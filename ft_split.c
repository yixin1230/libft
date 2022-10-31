/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 19:56:59 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/31 09:37:22 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
		if (s[i] == c && i > 0 && s[i - 1] != c)
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
		else if (s[i] == c && i > 0 && s[i - 1] != c)
		{
			p[j] = ft_calloc(count + 1, sizeof(char));
			count = 0;
			j++;
		}
		if (s[i + 1] == '\0' && s[i] != c)
		{
			p[j] = ft_calloc(count + 1, sizeof(char));
		}
		i++;
	}
	return (p);
}

static void	ft_cpy(const char *s, char **p, char c, size_t count)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		else if (s[i] == c && i > 0 && s[i - 1] != c)
		{
			p[j] = ft_memmove(p[j], s + i - count, count);
			count = 0;
			j++;
		}
		if (s[i + 1] == '\0' && s[i] != c)
			p[j] = ft_memmove(p[j], s + i - count + 1, count);
		i++;
	}
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
