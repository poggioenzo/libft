/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:16 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 02:40:41 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = s1;
	while (*s1)
		s1++;
	while (*s2 && i++ < n)
		*s1++ = *s2++;
	*s1 = '\0';
	return (ptr);
}
