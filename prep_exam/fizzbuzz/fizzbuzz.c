/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:54:45 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/18 17:29:26 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_write_number(int i);

int	main(void)
{
	int	i;

	i = 1;

	while(i <= 100)
	{
		if(i % 3 == 0 && i % 5 == 0) // para o caso de ser multiplo de 3 e de 5
		{
			write(1, "fizzbuzz", 8);
		}
		else if(i % 3 == 0) // para o caso de ser multiplo apenas de 3
		{
			write(1, "fizz", 4);
		}
		else if(i % 5 == 0)
		{
			write(1, "buzz", 4);//para o caso de ser multiplo apenas de 5
		}
		else
		{
			ft_write_number(i);
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_write_number(int i)
{
	if (i > 9)
	{
		ft_write_number(i / 10);// para fazer a repaticao para a leitura do pc
	}
	write(1, &"0123456789"[i % 10], 1);
}

