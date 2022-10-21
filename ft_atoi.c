/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 18:22:34 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/17 10:39:56 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	long	i;
	long	n;
	long	is_n;

	i = 0;
	n = 0;
	is_n = 1;
	while (str[i] == '\n' || str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_n = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		n = n * 10 + (str[i++] - '0');
	}
	return (n * is_n);
}

/* int main(void)
{
	char str[] = "   	1 1m32";
	printf("ft_atoi:%d\n",ft_atoi(str));
	printf("original:%d\n\n",atoi(str));
} */