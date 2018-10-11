/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:12 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 18:24:12 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

// to redo
char	*ft_strcat(char *dest, const char *scr)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (scr[j] != '\0')
	{
		dest[i] = scr[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}