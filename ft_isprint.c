/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 15:39:32 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/13 19:29:54 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isprint( int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	printf("%d", ft_isprint('j'));
	printf("\n%d", isprint('j'));
}
 */