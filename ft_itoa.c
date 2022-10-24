/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 16:22:37 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/24 19:57:43 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	count(int n)
{
	int	i;
	size_t	count;

	i = n;
	count = 1;
	if (n < 0)
	{
		i = -i;
		count++;
	}
	while(i > 9)
	{
		i /= 10;
		count++;
	}
	return (count);
}
char *digit(int n)
{
	char	c;
	int		i;

	i = n;
	if (i < 10)
		c = i + '0';
	if (i >= 10)
	{
		c[i] = digit(n % 10);
		c[i] = digit(n / 10);
	}
}

char *ft_itoa(int n)
{
	char	*c;
	size_t	i;
	int		nb;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		c = malloc((count(n) + 1) * sizeof(char));
		c[i] = '-';
		nb = -nb;
		i++;
	}
	else
		c = malloc((count(n) + 1) * sizeof(char));
	if(!c)
		return (NULL);
	if (nb < 10)
	{
		c[i] = nb + '0';
		i++;
	}
	else
	{
		c[i] = ft_itoa(nb / 10);
		i++;
		c[i] = (nb % 10) + '0';
		i++;
	}
	c[i] = '\0';
	return (c);
}

int main (void)
{
	printf("%s\n",ft_itoa(-70));
	printf("%d",count(12));
}