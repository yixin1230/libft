/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 15:40:38 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/17 09:50:44 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)str;
	while (i < n)
	{
		tmp[i] = c;
		i++;
	}
	return (str = tmp);
}

/* int	main(void)
{
	char	str[]= "asf,sfhadsf";
	printf("ft_memset:%s\n", ft_memset(str, '!', 3 * sizeof(char)));
	printf("memset:%s\n\n", memset(str, '!', 3 * sizeof(char)));
}
 */