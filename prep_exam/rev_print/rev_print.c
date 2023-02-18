/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:02:12 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/18 17:29:39 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}
//fazer o comprimento da minha string

char *ft_rev_print(char *str)
{
	int	i;

	i = ft_strlen(str); // minha variavel recebe minha func
	i--; // decremento da minha string
	while (i >= 0)
	{
		write(1, &str[i], 1);// essa linha e a de baixo faz a inversao da string
		i--;
	}
	return(str);
}

int	main()
{
	char str[] = "Familiarizado";
	ft_rev_print(str);
}
