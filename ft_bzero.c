/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 15:41:01 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/21 17:31:54 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
	s = str;
}

/* int main(void)
{s
	char str[]="adhfiduhai,gafu";

	ft_bzero(str, 3*sizeof(char));
	printf("ft_bzero:%s\n", str);
	bzero(str, 3*sizeof(char)); 
	printf("original:%s\n\n",str); 
}
 */