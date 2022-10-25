/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 16:22:58 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/25 19:34:12 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

/* char	fun(unsigned int i, char c)
{
	if(i >= 0)
		c -= 32;
	return (c);
} */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*ret;

	i = 0;
	len = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	ret = ft_calloc (len + 1, sizeof(char));
	if (!ret)
		return (NULL);
	else
	{
		while (i < len)
		{
			ret[i] = f(i, s[i]);
			i++;
		}
		ret[i] = '\0';
	}
	return (ret);
}

/* int main(void)
{
	char	*s;

	s = "lalal";
	printf("ft_strmapi:%s\n",ft_strmapi(s, fun));
} */