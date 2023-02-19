/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- < gdaniel-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:25:36 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/19 17:25:37 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

void	ft_rotone(char	*str)
{
	int	c;

	c = 0;
	while (str[c])
	{
   		if (str[c] >= 'a' && str[c] <= 'y')	
			str[c] = str[c] + 1;
   		else if (str[c] >= 'A' && str[c] <= 'Y')
			str[c] = str[c]  + 1;
		else if (str[c] == 'z')
			str[c] = 'a';
		else if (str[c] == 'Z')
			str[c] = 'A';
		write (1, &str[c], 1);
		c++;
	}
}

int 	main	(int ac, char **av)
{
	if (ac == 2)
		ft_rotone(av[1]);
	write(1, "\n", 1);
	return (0);
}