/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- < gdaniel-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:49:22 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/15 12:13:43 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (dest[i] != '\0')
		i++;
	while (len < nb && src[len] != '\0')
	{
		dest[i] = src[len];
		i++;
		len++;
	}
	dest[i] = '\0';
	return (dest);
}
// int 	main ()
// {
// 	char s1 [] = "Boas familia";
// 	char s2 [] = "Tamos junto";
// 	printf ("%s", ft_strncat(s1, s2, 6));
// }