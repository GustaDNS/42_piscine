/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:55:31 by gudaniel          #+#    #+#             */
/*   Updated: 2024/01/02 10:59:04 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power >= 1)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	return (i);
}
// int	main()
// {
// 	printf("%d", ft_recursive_power(4, 3));
// 	return(0);
// }