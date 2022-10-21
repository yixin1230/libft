/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 18:22:23 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/17 09:42:10 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_tmp;
	unsigned char	*s2_tmp;

	i = 0;
	s1_tmp = (unsigned char *)s1;
	s2_tmp = (unsigned char *)s2;
	if (!s2 && !s1)
		return (0);
	while (n && s1_tmp[i] == s2_tmp[i])
	{
		n--;
		i++;
	}
	if (n == 0)
		return (0);
	return (s1_tmp[i] - s2_tmp[i]);
}

/* int main(void)
{
	char	s1[] = "aaaa";
	char	s2[] = "Asdf";
	printf("ft_memcmp:%d\n",ft_memcmp(s1,s2,10));
	printf("original:%d\n",memcmp(s1,s2,10));
} */