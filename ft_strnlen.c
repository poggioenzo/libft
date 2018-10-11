/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnlen.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:18 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 18:24:18 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int ft_strnlen(const char *str, size_t n)
{
	int i;

	i = 0;
	while (*str && n-- && ++i)
		;
	return (i);
}


// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char **argv)
// {
//
// 	printf("%d %d\n", ft_strnlen(argv[1], atoi(argv[2])), atoi(argv[2]));
// 	return 0;
// }