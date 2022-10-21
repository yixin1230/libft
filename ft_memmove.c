/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 15:42:19 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/17 10:42:08 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	ft_strcpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*tmp_src;
	char		*tmp_dst;

	i = 0;
	tmp_src = (const char *)src;
	tmp_dst = (char *)dst;
	if (!tmp_src && !tmp_dst)
		return (NULL);
	if (tmp_src > tmp_dst)
		ft_strcpy(tmp_dst, tmp_src, len);
	else if (tmp_src <= tmp_dst)
	{
		i = len;
		while (i > 0)
		{
			i--;
			tmp_dst[i] = tmp_src[i];
		}
	}
	return (dst);
}
/* 
int main(void)
{
	char	src[]="22aaADSASDASD";
	printf("ft_memmove:%s\n",ft_memmove(src+3, src, 6*sizeof(char)));
	printf("orignial:%s\n\n",memmove(src+3, src, 6*sizeof(char)));
} */