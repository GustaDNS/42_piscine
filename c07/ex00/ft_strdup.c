/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:52:38 by gudaniel          #+#    #+#             */
/*   Updated: 2024/01/03 18:38:03 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;
	int		len;

	ptr = malloc(ft_strlen(src) * sizeof(*ptr) + 1);
	i = 0;
	len = ft_strlen(src);
	while (src[len])
		len++;
	while (i < len)
	{
		ptr[i] = src[i];
		i++;
	}
	return (ptr);
}
// int       main(void)
// {
//     char    *str;
//     char    *allocated;
//     str = "Hello World with malloc()";
//     printf("original  : base  : $%s$ @ %p\n", str, str);
//     allocated = strdup(str);
//     printf("copied    : alloc : $%s$ @ %p\n", allocated, allocated);
//     allocated = ft_strdup(str);
//     printf("ft_copied : alloc : $%s$ @ %p\n", allocated, allocated);
// }