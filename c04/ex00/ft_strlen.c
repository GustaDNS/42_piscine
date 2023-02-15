/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- < gdaniel-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:27:01 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/13 16:52:38 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str [x] != '\0')
	{
		x++;
	}
	return (x);
}
// int	main()
// {
// 	char *a = "Finalmente estou a perceber";
// 	printf ("%d", ft_strlen(a));
// }
