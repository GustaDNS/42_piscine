/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- < gdaniel-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:09:15 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/07 17:20:15 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/*int	main()
{
	int a;
	int b;
	int *div;
	int *mod;

	div = &a;
	mod = &b;

	a = 10;
	b = 5;
	ft_div_mod(a, b, div, mod);
	printf ("%d\n", *div);
	printf ("%d", *mod);
}*/
