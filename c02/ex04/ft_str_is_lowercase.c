/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:27:05 by gudaniel          #+#    #+#             */
/*   Updated: 2023/12/21 14:30:34 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122))
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
// 	printf("%d", ft_str_is_lowercase("asdsadkjaskdljlkasj"));
//     printf("%d", ft_str_is_lowercase("ASJKASDASDLVCX"));
// 	printf("%d", ft_str_is_lowercase("2"));
// 	printf("%d", ft_str_is_lowercase(""));
// }
