/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <achabrer@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:07:16 by achabrer          #+#    #+#             */
/*   Updated: 2023/02/05 16:00:43 by hmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int x, int y, int h, int v)
{
	if (h == 1 && v == 1)
	{
		ft_putchar('A');
	}
	else if (h == 1 && v == y)
	{
		ft_putchar('A');
	}
	else if (h == x && v == 1)
	{
		ft_putchar('C');
	}
	else if (h == x && v == y)
	{
		ft_putchar('C');
	}
	else if (h == 1 || h == x || v == 1 || v == y)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	h;
	int	v;

	h = 1;
	v = 1;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (v <= y)
	{
		while (h <= x)
		{
			ft_print(x, y, h, v);
			h++;
		}
		ft_putchar('\n');
		v ++;
		h = 1;
	}
}
