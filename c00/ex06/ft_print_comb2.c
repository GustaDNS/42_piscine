/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- < gdaniel-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:14:41 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/13 13:58:01 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ascii_convert1(int a, int b)
{
	int	i[4];

	i [0] = (48 + (a / 10));
	i [1] = (48 + (a % 10));
	i [2] = (48 + (b / 10));
	i [3] = (48 + (b % 10));
	ft_putchar (i[0]);
	ft_putchar (i[1]);
	ft_putchar (' ');
	ft_putchar (i[2]);
	ft_putchar (i[3]);
	if (a < 98 && b <= 99)
	{
		ft_putchar (',');
		ft_putchar (' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = 1 + a;
		while (b <= 99)
		{
			ascii_convert1(a, b);
			b++;
		}
		a++;
	}
}
int	main(void)
{
	ft_print_comb2 ();
	return (0);
}
