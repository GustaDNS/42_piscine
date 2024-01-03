/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:47:48 by gudaniel          #+#    #+#             */
/*   Updated: 2024/01/02 10:58:35 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return ((nb * ft_recursive_factorial(nb - 1)));
}
// int	main()
// {
// 	printf("%d",  ft_recursive_factorial(5));
// 	return(0);
// }
