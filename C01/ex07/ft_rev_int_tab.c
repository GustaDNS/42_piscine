/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- < gdaniel-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:25:15 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/07 17:30:12 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	swap;

	x = 0;
	while (x < (size / 2))
	{
		swap = tab [x];
		tab [x] = tab [size - x - 1];
		tab [size - x] = swap;
		x++;
	}
}

/*int	main (void)
{
	int a = 0;
	int tabela [] = {1,2,3,4,5,6,7,8,9};
	int *tab = tabela;
	int size = 9;
	ft_rev_int_tab (tab, size);
	while (a <= size)
	{
		printf("%d", tab[a]);
		a++;
	}
	return (0);
}*/
