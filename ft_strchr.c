/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 18:22:15 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/25 20:11:58 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}

/* int main(void)
{
	const char s[]="sfAsufgyis";
	char c;
	c = '\0';
	printf("ft_strchr: %s\n",ft_strchr(s,c));
	printf("original: %s\n\n",strchr(s,c));
	printf("ft_strchr: %s\n",ft_strchr("teste",'e'));
	printf("original: %s\n\n",strchr("teste",'e'));
		printf("ft_strchr: %s\n",ft_strchr("teste",'\0'));
	printf("original: %s\n\n",strchr("teste",'\0'));
} */