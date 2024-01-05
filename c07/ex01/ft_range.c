/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:13:58 by gudaniel          #+#    #+#             */
/*   Updated: 2024/01/04 11:40:42 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;
	int	*nul;

	ptr = malloc((max - min) * sizeof(*ptr));
	nul = NULL;
	i = 0;
	if (min >= max)
	{
		return (nul);
	}
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
// #include <stdio.h>

// int main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*tab;
// 	int	i = 0;
// 	int	size;

// 	min = 5;
// 	max = 10;
// 	size = max - min;
// 	tab = ft_range(min, max);
// 	while(i < size)
// 	{
// 		printf("%d, ", tab[i]);
// 		i++;
// 	}
// }
