/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 16:23:19 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/25 19:36:35 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	f(unsigned int i, char *s)
{
	if (i >= 0)
		*s = 36;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (*s)
	{
		f(i, s);
		s++;
		i++;
	}
}

/* int main(void)
{
	char	s[]="00000000fhjgfhjgfh";
	ft_striteri(s,f);
	printf("%s",s);
} */