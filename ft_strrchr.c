/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 18:21:52 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/26 15:25:37 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*tmp;

	tmp = NULL;
	while (*s)
	{		
		if (*s == (char)c)
			tmp = s;
		s++;
	}
	if (*s == '\0' && (char)c == '\0')
	{
		tmp = s;
		return ((char *)tmp);
	}
	return ((char *)tmp);
}

/* int main(void)
{
	printf("ft_strrchr:%s\n",ft_strrchr( "teste",  '?'));
	printf("original:%s\n\n",strrchr( "teste", '?'));
} */