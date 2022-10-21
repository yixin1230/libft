/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 15:41:36 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/17 10:22:04 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{	
	size_t		i;
	char		*tmp_dst;
	const char	*tmp_src;

	i = 0;
	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		tmp_dst[i] = tmp_src[i];
		i++;
	}
	return (dst);
}
/* int main(void)
{
 	char	dst[] = "kuhdusf";
 	printf("ft_memcpy:%s\n",ft_memcpy(dst+8, dst, 5*sizeof(char)));
 	printf("orignial:%s\n\n",memcpy(dst+8, dst , 5*sizeof(char)));

} */