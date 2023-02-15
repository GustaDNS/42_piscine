/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:21:36 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/15 14:33:26 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main (int argc, char **argv)
{
	(void) argc;
	(void) argv;
	printf("Numb of arguments: %d\n", argc); //Numero de argumentos dentro do array.
	printf("value of the arguments: %s\n", argv[1]);//posicao/valor do argumento.
	return (0);
}
