/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 18:22:49 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/17 10:01:48 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;
	size_t	all;

	i = 0;
	len = ft_strlen(dst);
	all = ft_strlen(dst) + ft_strlen(src);
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize < len)
		return (dstsize + ft_strlen(src));
	if (dstsize > 0)
	{
		while (src[i] && len < dstsize - 1)
		{
			dst[len] = src[i];
			i++;
			len++;
		}
		dst[len] = '\0';
	}
	return (all);
}

/* int main(void)
{
	//ft
	printf("ft_strlcat: len: %zu\n",ft_strlcat("pqrstuvwxyz", "abcd", 1));

	//original
	printf("original: len: %zu\n",strlcat("pqrstuvwxyz", "abcd", 1));
} */