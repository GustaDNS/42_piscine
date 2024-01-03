/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:40:49 by gudaniel          #+#    #+#             */
/*   Updated: 2023/12/17 11:12:19 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	swap;

	while (size >= 0)
	{
		x = 0;
		while (x < size - 1)
		{
			if (tab[x] > tab[x + 1])
			{
				swap = tab[x];
				tab [x] = tab[x + 1];
				tab [x + 1] = swap;
			}
			x++;
		}
		size--;
	}
}
/*
int	main()
{
	int	tab[7] = {3, 6, 4, 9, 7, 1, 0};
	int	size = 7;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], 
			tab[3], tab[4], tab[5], tab[6]);
	return(0);

}*/
