/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:34:32 by gudaniel          #+#    #+#             */
/*   Updated: 2023/12/15 12:01:11 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main()
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;
	a = 10;
	b = 32;
	printf("%d, %d, \n", a, b);
	ptra = &a;
	ptrb = &b;

	ft_swap(ptra, ptrb);
	printf("%d, %d", a, b);
	return(0);
}*/
