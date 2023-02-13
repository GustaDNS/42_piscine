/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- < gdaniel-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:12:51 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/07 17:28:20 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = (*a / *b);
	*b = (swap % *b);
}
/*int	main ()
{
	int a;
	int b;

	a = 10;
	b = 5;
	
	int *x = &a;
	int *y = &b;
	ft_ultimate_div_mod( x, y);
	return (0);
	printf ("%d, %d", *a, *b);
}*/
