/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 18:21:57 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/17 10:40:52 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n_len;
	size_t	count;
	char	*hay;

	i = 0;
	n_len = ft_strlen(needle);
	count = 0;
	hay = (char *)haystack;
	if (n_len == 0)
		return (hay);
	if (n_len > ft_strlen(hay))
		return (NULL);
	while (haystack[i] && i < len - 1 && n_len <= len)
	{
		while (haystack[i + count] == needle[count]
			&& needle[count] != '\0' && i + count < len)
			count++;
		if (count == n_len)
			return (&hay[i]);
		count = 0;
		i++;
	}
	return (NULL);
}
