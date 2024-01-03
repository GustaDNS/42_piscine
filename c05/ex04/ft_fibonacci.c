/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:55:25 by gudaniel          #+#    #+#             */
/*   Updated: 2024/01/02 14:58:49 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	index--;
	return (ft_fibonacci(index) + ft_fibonacci(index - 1));
}
int	main()
{
	printf("%d", ft_fibonacci(7));
	return(0);
}