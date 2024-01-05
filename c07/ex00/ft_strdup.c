/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:52:38 by gudaniel          #+#    #+#             */
/*   Updated: 2024/01/04 11:43:12 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = ((char *)malloc(ft_strlen(src) * sizeof(char) + 1));
	if (!dest)
	{
		return (0);
	}
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int       main(void)
{
    char    *str;
    char    *allocated;

    str = "Hello World with malloc()";
    printf("original  : base  : $%s$ @ %p\n", str, str);
    allocated = strdup(str);
    printf("copied    : alloc : $%s$ @ %p\n", allocated, allocated);
    allocated = ft_strdup(str);
    printf("ft_copied : alloc : $%s$ @ %p\n", allocated, allocated);
}*/
