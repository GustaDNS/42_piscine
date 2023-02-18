/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:53:29 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/18 17:29:21 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);// verificacao de cada char da string e depois da acrescimo continua ate chegar
		   // no nulo, quando chegar acaba.
}

int	main ()
{
	char *a = "Cheguei em algum sitio";
	printf ("%d", ft_strlen(a));
}
