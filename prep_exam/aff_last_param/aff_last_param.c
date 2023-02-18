/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:47:36 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/18 17:24:48 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	
	if(argc > 1)
	{
		argc--;// para selecionar o ultimo parametro
		while(argv[argc][i] != '\0')//leitura do ultimo
		{
			write(1, &argv[argc][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
