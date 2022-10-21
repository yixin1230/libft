/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 08:26:47 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/18 18:49:01 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
//literal is too large to be represented in a signed integer type
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	cpy_len;
	char	*str;

	i = 0;
	cpy_len = len;
	if(!s)
		return(NULL);
	if ((size_t)start  >= (size_t)ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
	{
		str = ft_calloc(1, sizeof(char));
		return (str);
	}
	if (len > (size_t)ft_strlen(s) - (size_t)start)
		cpy_len = (size_t)ft_strlen(s) - (size_t)start;
	str = ft_calloc((cpy_len + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (i < cpy_len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

/* int main(void)
{
	printf("1ft_substr: %s\n",ft_substr("123456789", 1, 2));
	printf("2ft_substr: %s\n",ft_substr("123456789", 0, 2));
	printf("3ft_substr: %s\n",ft_substr("123456789", 0, 0));
	printf("4ft_substr: %s\n",ft_substr("123456789", 0, 10));
	printf("5ft_substr: %s\n",ft_substr("123456789", 0, 20));
	char *s;
	s = "all of this !";
	size_t size = ft_strlen(s);
	printf("6ft_substr: %s\n",ft_substr(s, 0, size));
	printf("7ft_substr: %s\n",ft_substr("hola", 0, 184));
	printf("8ft_substr: %s\n",ft_substr("sfs", 7, 0));
	printf("9ft_substr: %s\n",ft_substr("sfs", 7, 5));
	printf("10ft_substr: %s\n",ft_substr("1234", 0, 0));
	printf("11ft_substr: %s\n",ft_substr("", 1, 0));
	printf("12ft_substr: %s\n",ft_substr("", 1, 1));
	printf("13ft_substr: %s\n",ft_substr("", 0, 1));
} */