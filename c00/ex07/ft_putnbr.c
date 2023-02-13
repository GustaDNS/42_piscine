/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- < gdaniel-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:11:03 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/13 13:58:05 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	a;

	a = 10;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = (nb * -1);
	}
	while (a < nb)
	{
		a = (a * 10);
	}
	if (nb % 10 != 0)
	{
		a = (a / 10);
	}
	while (a >= 10)
	{
		ft_putchar(((nb / a) % 10) + 48);
		a = (a / 10);
	}
	ft_putchar((nb % 10) + 48);
}
int	main(void)
{
	ft_putnbr(-12);
	return (0);
}
