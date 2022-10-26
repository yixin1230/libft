/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 18:22:26 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/26 14:49:54 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}

/* int main(void)
{
	printf("ft_memchr:%s\n",ft_memchr("bonjourno", 'n', 2));
	printf("original:%s\n\n",memchr("bonjourno", 'n', 2));
} */