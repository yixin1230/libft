/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 18:22:26 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/17 09:41:34 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*tmp;
	size_t	i;

	tmp = (char *)s;
	i = 0;
	while (i < n && tmp[i])
	{
		if (tmp[i] == c)
		{
			return ((void *)s + i);
		}
		i++;
	}
	if (tmp[i] == c && tmp[i] == '\0')
		return ((void *)s + i);
	return (0);
}

/* int main(void)
{
	printf("ft_memchr:%s\n",ft_memchr("bonjourno", 'n', 2));
	printf("original:%s\n\n",memchr("bonjourno", 'n', 2));
} */