/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- < gdaniel-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:36:56 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/09 11:50:09 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int main ()
{
	int a;
	int b;
	int *ptra;
	int *ptrb;
	a = 12;
	b = 32;
	printf ("%d, %d \n", a ,b);
	ptra = &a;
	ptrb = &b;
	
	ft_swap(ptra, ptrb);
	printf ("%d, %d", a ,b);
	return (0);
}
