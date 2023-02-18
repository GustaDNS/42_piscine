/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:59:20 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/18 17:29:43 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

void	ft_putnbr (int nb)
{
	
	if(nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 14783648;//reparticao do numero para ele coseguir ser lido
	}
	if (nb < 0) 
	{
		ft_putchar ('-'); //representacao do sinal de menos
		nb = -nb;// como se tivesse a multiplar por -1
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10); // invocacao da msm funcao (backtracking)
		nb %= 10;
		//pegar o valor antes e depois da virgula (/ para antes da virgula)
		//(% para pegar o resto da divisao)
	}
	ft_putchar (nb + 48); //conversao para ascii
}

int	main (void)
{
	ft_putnbr(-2147483648);
	return (0);
}
