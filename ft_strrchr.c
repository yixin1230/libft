/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 18:21:52 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/25 20:13:02 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		n;
	char	*tmp;

	i = 0;
	n = 0;
	tmp = (char *)s;
	if (tmp[0] == (char)c)
		return ((char *)s);
	while (tmp[i])
	{		
		if (tmp[i] == (char)c)
			n = i;
		i++;
	}
	if (tmp[i] == (char)c)
		return ((char *)s + i);
	if (tmp[n] == (char)c)
		return ((char *)s + n);
	return (0);
}

/* int main(void)
{
	printf("ft_strrchr:%s\n",ft_strrchr( "teste",  '?'));
	printf("original:%s\n\n",strrchr( "teste", '?'));
} */