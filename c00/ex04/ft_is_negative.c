/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- < gdaniel-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:03:54 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/13 13:57:53 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n >= 0)
	{
		c = 'P';
		write (1, &c, 1);
	}
	else
	{
		c = 'N';
		write (1, &c, 1);
	}
}
int	main(void)
{
	ft_is_negative (3);
	return (0);
}
