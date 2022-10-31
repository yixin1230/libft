/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 08:26:47 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/31 09:24:52 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	cpy_len;
	char	*str;

	i = 0;
	cpy_len = len;
	if (!s)
		return (NULL);
	if ((size_t)start >= (size_t)ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
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
