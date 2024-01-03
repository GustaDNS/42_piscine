/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:13:58 by gudaniel          #+#    #+#             */
/*   Updated: 2024/01/03 18:38:58 by gudaniel         ###   ########.fr       */
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
// int	main()
// {
// 	int i = 0;
// 	int *a = ft_range(24,  29);
// 	while(i < 29 -24)
// 		printf("%d", a[i++]);
// 	return(0);
// }