/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 15:43:05 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/17 10:03:02 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*src_tmp;

	i = 0;
	src_tmp = (char *)src;
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i] != '\0')
		{
			dst[i] = src_tmp[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/* 	int main(void)
	{
		char	src[]="aasas";
		char	dst[]="1";
		printf("ft_strlcpy src size:%zu\n",ft_strlcpy(dst , src, sizeof(dst)));
		ft_strlcpy(dst , src, sizeof(dst));		
		printf("original src size:%zu\n",strlcpy(dst , src, sizeof(dst)));
		strlcpy(dst , src, sizeof(dst)); 
		printf("dst: %s\n",dst);
	}
 */