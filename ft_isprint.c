/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 18:28:22 by yizhang       #+#    #+#                 */
/*   Updated: 2022/11/04 18:28:22 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint( int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
