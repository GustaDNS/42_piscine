/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:37:39 by gudaniel          #+#    #+#             */
/*   Updated: 2024/01/03 13:42:32 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	index;
	long	b;

	b = nb;
	if (b <= 0)
		return (0);
	index = 1;
	if (b >= 1)
	{
		while (index * index <= b)
		{
			if (index * index == b)
				return (index);
			else 
				return 0;
			index++;
		}
	}
	return (0);
}
// int	main()
// {
// 	printf("%d", ft_sqrt(25));
// 	return(0);
// }