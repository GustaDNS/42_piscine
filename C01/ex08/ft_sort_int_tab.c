/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- < gdaniel-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:54:07 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/07 17:32:28 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	swap;

	while (size >= 0)
	{
		x = 0;
		while (x < size -1)
		{
			if (tab[x] > tab[x + 1])
			{
				swap = tab [x];
				tab [x] = tab[x + 1];
				tab [x + 1] = swap;
			}
			x++;
		}
		size--;
	}
}
//int	main()
//{
//	int	tab [6] = {9,2,5,7,3,6};
//	int	size = 6;
//
//	ft_sort_int_tab(tab, size);
//	printf("%d, %d, %d, %d, %d, %d", tab[0],
//	tab [1], tab [2], tab [3], tab [4], tab [5]);
//	return (0);
//}
