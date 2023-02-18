/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imp_space.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:16:09 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/18 17:29:16 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;// para so ler o primeiro parametro
	j = 0;

	while(i < argc)
	{
		while(argv[1][j] != '\0')//correr ate um parametro antes do nulo!
		{
			write(1, &argv[1][j], 1);
			if(!(argv[1][j + 1] == '\0'))// enquanto meu j nao chegar na ultima posicao ante
						// do nulo fica adicionando 3 espacos entre cada char
			{
				write(1, "   ", 3);
			}
			j++; //adiciona mais um depois de cada "ciclo"
		}
		write (1, "\n", 1); // quebra de linha
		
	}

}
