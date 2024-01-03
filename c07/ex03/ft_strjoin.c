/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:45:34 by gudaniel          #+#    #+#             */
/*   Updated: 2024/01/03 18:49:10 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		a;
	int		i;
	int		j;
	int		c;
	char	*catsrt;

	catsrt = malloc(sizeof(strs) + (sizeof(sep) * (size - 1)));
	i = 0;
	a = 0;
	while (i < size)
	{
		c = 0;
		j = 0;
		while (strs[i][j])
			catsrt[a++] = strs[i][j++];
		if (i == size - 1)
		{
			catsrt[a] = '\0';
			return (catsrt);
		}
		while (sep[c])
			catsrt[a++] = sep[c++];
		i++;
	}
	return (catsrt);
}
// int	main(void)
// {
// 	char	*tab[4];
// 	tab[0] = "gustavo";
// 	tab[1] = "Daniel";
// 	tab[2] = "Siqueira";
// 	tab[3] = "pizzuti";
// 	printf("%s", ft_strjoin(4, tab, "| "));
// 	return (0);
// }
