/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 13:29:10 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/17 11:40:23 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		len;
	int		i;

	len = ft_strlen(s1);
	i = 0;
	p = (char *)malloc(len + 1 * sizeof(char));
	if (p == 0)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/* int main(void)
{
	char s1[] = "21312";
	printf("ft_strdup:%s\n",ft_strdup(s1));
	printf("original:%s\n\n",ft_strdup(s1));
} */