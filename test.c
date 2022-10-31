/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:59:08 by yizhang       #+#    #+#                 */
/*   Updated: 2022/10/31 17:25:50 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"


/* static void	f(unsigned int i, char *s)
{
	if (i >= 0)
		*s = 36;
} */

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

	//ft_strtrim test
	printf("1ft_strtrim:%s\n",ft_strtrim("3 11119199suf1  h1a3 1111sf1 1sd  1fas 3 1111", "3 1111"));
	printf("2ft_strtrim:%s\n",ft_strtrim("t elorem ipsum dolor sit amet", "tae m"));
	printf("2ft_strtrim:%s\n",ft_strtrim("", ""));

	//ft_atoi test
	char str[] = "   	1 1m32";
	printf("ft_atoi:%d\n",ft_atoi(str));
	printf("original:%d\n\n",atoi(str));

	//ft_bzero test
	char str[]="adhfiduhai,gafu";
	ft_bzero(str, 3*sizeof(char));
	printf("ft_bzero:%s\n", str);
	bzero(str, 3*sizeof(char)); 
	printf("original:%s\n\n",str);

	//ft_itoa test
	printf("%s\n",ft_itoa(-2147483648LL));
	printf("%s\n",ft_itoa(-2147483647 -1));

	//ft_memchr test
	printf("ft_memchr:%s\n",ft_memchr("bonjourno", 'n', 2));
	printf("original:%s\n\n",memchr("bonjourno", 'n', 2));

	//ft_memcmp test
	char	s1[] = "aaaa";
	char	s2[] = "Asdf";
	printf("ft_memcmp:%d\n",ft_memcmp(s1,s2,10));
	printf("original:%d\n",memcmp(s1,s2,10));

	//ft_strchr test
	const char s[]="sfAsufgyis";
	char c;
	c = '\0';
	printf("ft_strchr: %s\n",ft_strchr(s,c));
	printf("original: %s\n\n",strchr(s,c));
	printf("ft_strchr: %s\n",ft_strchr("teste",'e'));
	printf("original: %s\n\n",strchr("teste",'e'));
	printf("ft_strchr: %s\n",ft_strchr("teste",'\0'));
	printf("original: %s\n\n",strchr("teste",'\0'));

	//ft_strdup test
	char s1[] = "21312";
	printf("ft_strdup:%s\n",ft_strdup(s1));
	printf("original:%s\n\n",ft_strdup(s1));

	//ft_striteri test
	char	s[]="00000000fhjgfhjgfh";
	ft_striteri(s,f);
	printf("%s",s);

	//ft_strjoin test
	printf("ft_strjoin:%s\n",ft_strjoin("jhg",""));
	printf("ft_strjoin:%s\n",ft_strjoin("",""));

	//ft_strlcat test
	printf("ft_strlcat: len: %zu\n",ft_strlcat("pqrstuvwxyz", "abcd", 1));
	printf("original: len: %zu\n",strlcat("pqrstuvwxyz", "abcd", 1));

	//ft_strlcpy test
	char	src[]="aasas";
	char	dst[]="1";
	printf("ft_strlcpy src size:%zu\n",ft_strlcpy(dst , src, sizeof(dst)));
	ft_strlcpy(dst , src, sizeof(dst));		
	printf("original src size:%zu\n",strlcpy(dst , src, sizeof(dst)));
	strlcpy(dst , src, sizeof(dst)); 
	printf("dst: %s\n",dst);

	//ft_strlen test
	char	*str;

	str = "dsijfis";
	printf("%zu", ft_strlen(str));
	printf("\n%zu", ft_strlen(str));

	//ft_strmapi test
	char	*s;

	s = "lalal";
	printf("ft_strmapi:%s\n",ft_strmapi(s, fun));

	
}

	//ft_split test
int main(void)
{
	char	**s;
	s = ft_split(" 012 3 4 5 6   89   ",' ');
	for(size_t	i = 0; i < 6;i++)
		printf("s:%s\n",s[i]);
	for(size_t	i = 0; i < 6;i++)
		free(s[i]);

	char	**s1;
	s1 = ft_split("      split       this for   me  !       ",' ');
	for(size_t	i = 0; i < 5;i++)
		printf("s1:%s\n",s1[i]);
	for(size_t	i = 0; i < 5;i++)
		free(s1[i]);
	
	char	**s2;
	s2 = ft_split("                  olol",' ');
	for(size_t	i = 0; i < 1;i++)
		printf("s2:%s\n",s2[i]);
	for(size_t	i = 0; i < 1;i++)
		free(s2[i]);

	char	**s3;
	s3 = ft_split("olol        ",' ');
	for(size_t	i = 0; i < 1;i++)
		printf("s3:%s\n",s3[i]);
	for(size_t	i = 0; i < 1;i++)
		free(s3[i]);

	char	**s4;
	s4 = ft_split("hello!",' ');
	for(size_t	i = 0; i < 1;i++)
		printf("s4:%s\n",s4[i]);
	for(size_t	i = 0; i < 1;i++)
		free(s4[i]);

	char	**s5;
	s5 = ft_split("xxxxxxxxhello!",'x');
	for(size_t	i = 0; i < 1;i++)
		printf("s5:%s\n",s5[i]);
	for(size_t	i = 0; i < 1;i++)
		free(s5[i]);	
} 

 int main(int ac, char **av)
{
	char ** dstr;
	int i = 0;

ac = 0;
	dstr = ft_split(av[1], 'x');
	while(dstr[i])
	{
	printf("%dth string%s\n", i, dstr[i]);
	i++;
	}
	printf("%dth string%s\n", i, dstr[i]);
	return(0);
} 


