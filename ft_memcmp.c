/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:08 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 18:24:08 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *c1;
	unsigned char *c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (n--)
		if (*c1++ != *c2++)
			return (*(--c1) - *(--c2));
	return (0);
}

// #include <stdio.h>
//
// int main(int argc, char const *argv[])
// {
// 	if (argc == 4)
// 	{
// 		printf("%d\n", ft_memcmp(NULL, argv[2], atoi(argv[3])));
// 		printf("%d\n", memcmp(argv[1], argv[2], atoi(argv[3])));
// 	}
// 	else
// 	printf("LOL les arguments\n");
// 	return 0;
// }