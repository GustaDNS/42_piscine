/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- < gdaniel-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:03:09 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/19 17:26:59 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char **argv)
{
	int	x;
	int	y;

	x = 1;
	y = 0;

	if (argc != 2)	
		write(1, "\n", 1);
	
	while (argv[1][y] != '\0')
	{		
		if(argv[1][y] >= 65 && argv[1][y] <= 90)
		{
			argv[1][y] += 32;
		}
		else if(argv[1][y] >= 97 && argv[1][y] <= 122)
		{		
			argv[1][y] -= 32;
		}
		y++;
	}
	y = 0;
	while (argv[1][y] != '\0')
	{
		write (1, &argv[1][y], 1);
		y++;
	}
	write(1, "\n", 1);
}
