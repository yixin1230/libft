/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:59:08 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/17 10:43:12 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int main(void)
{
	//ft_isalpha test
    printf("\nft_isalpha:%d",ft_isalpha('a'));
	printf("\noriginal:%d\n\n",isalpha('a'));

	//ft_isdigit test
	printf("ft_isdigit:%d", ft_isdigit('2'));
	printf("\noriginal:%d\n\n", isdigit('2'));

	//ft_isalnum test
	printf("ft_isalnun:%d\n",ft_isalnum(' '));
	printf("original:%d\n\n",isalnum(' '));

	//ft_isascii test
	printf("ft_ascii:%d/n", ft_isascii('0x80'));
	printf("original:%d/n/n", isascii('0x80'));

	//ft_isprint test
	printf("ft_isprint%d", ft_isprint('j'));
	printf("original:%d", isprint('j'));
	
	//ft_strlen test
	char	*str;

	str = "dsijfis";
	printf("%zu", ft_strlen(str));
	printf("\n%zu", ft_strlen(str));

	//ft_memset test
	char	str[]= "asf,sfhadsf";
	printf("ft_memset:%s\n", ft_memset(str, '!', 3 * sizeof(char)));
	printf("original:%s\n\n", memset(str, '!', 3 * sizeof(char)));


	//ft_bzero test
	char str[]="adhfiduhai,gafu";

	ft_bzero(str, 3*sizeof(char));
	printf("ft_bzero:%s\n", str);
	bzero(str, 3*sizeof(char)); 
	printf("original:%s\n\n",str); 

	//ft_memcpy test
	char	src[]="aaaa";
	char	dst[]="aaaa";
	printf("ft_memcpy:%s\n",ft_memcpy(dst, src, 3*sizeof(char)));
	printf("orignial:%s\n\n",memcpy(dst, src, 3*sizeof(char)));

	//ft_memmove test
	char	src[]="22aaADSASDASD";
	printf("ft_memmove:%s\n",ft_memmove(src+3, src, 6*sizeof(char)));
	printf("orignial:%s\n\n",memmove(src+3, src, 6*sizeof(char)));

	//ft_strnstr test
	printf("ft_strnstr:%s\n",ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	printf("original:%s\n\n",strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));

	printf("ft_strnstr:%s\n",ft_strnstr("abcdefgh", "abc", 2));
	printf("original:%s\n\n",strnstr("abcdefgh", "abc", 2));

	printf("ft_strnstr:%s\n",ft_strnstr("abcdefgh", "abc", 5));
	printf("original:%s\n\n",strnstr("abcdefgh", "abc", 5));

	printf("ft_strnstr:%s\n",ft_strnstr("aaxx", "xx", 4));
	printf("original:%s\n\n",strnstr("aaxx", "xx", 4));

	printf("ft_strnstr:%s\n",ft_strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", 9));
	printf("original:%s\n\n",strnstr("MZIRIBMZIRIBMZE123","MZIRIBMZE", 9));

}
