/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:45:19 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/21 11:00:07 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc == 2)
	{
		x = 0;
		while (argv [1][x])
		{
			y = 1;
			if (argv[1][x] >= 'a' && argv [1][x] <= 'z')
				y += argv[1][x] - 'a';
			else if (argv[1][x] >= 'A' && argv [1][x] <= 'Z')
				y += argv[1][x] - 'A';
			while(y)
			{
				write(1, &argv[1][x], 1);
				y--;
			}
			x++;
		}	
	}
	write(1, "\n", 1);
	return (0);


}
