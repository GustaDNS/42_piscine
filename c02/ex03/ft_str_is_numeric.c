/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:55:55 by gudaniel          #+#    #+#             */
/*   Updated: 2023/12/21 14:30:37 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 48 && str[i] <= 57))
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
// int	main()
// {
// 	printf("%d", ft_str_is_alpha("ASJKasdsadLVCX"));
// 	printf("%d", ft_str_is_alpha("2"));
// 	printf("%d", ft_str_is_alpha(""));

// }
