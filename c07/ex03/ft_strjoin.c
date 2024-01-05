/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:45:34 by gudaniel          #+#    #+#             */
/*   Updated: 2024/01/04 11:46:23 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_lngh(char **strs, int size, char *sep)
{
	int	i;
	int	lng;

	i = 0;
	lng = 0;
	while (i < size)
	{
		lng = lng + ft_strlen(strs[i]);
		i++;
	}
	lng = lng + (size - 1) * ft_strlen(sep) + 1;
	return (lng);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	str = malloc(sizeof(char) * ft_lngh(strs, size, sep));
	if (!str)
		return (NULL);
	*str = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
// int main(void)
// {
//     char    **strs;
//     char    *separator;
//     char    *result;
//     int size;

//     size = 3;
//     strs = (char **)malloc(3 * sizeof(char *));
//     strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
//     strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
//     strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
//     strs[0] = "Hello";
//     strs[1] = "friend,";
//     strs[2] = "you are awesome";
//     separator = " ";
//     result = ft_strjoin(size, strs, separator);
//     printf("%s$\n", result);
//     free(result);
// }