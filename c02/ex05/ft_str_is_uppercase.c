/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:57:52 by gudaniel          #+#    #+#             */
/*   Updated: 2023/12/21 14:30:32 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90))
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
// 	printf("%d", ft_str_is_uppercase("asdsadkjaskdljlkasj"));
//     printf("%d", ft_str_is_uppercase("ASJKASDASDLVCX"));
// 	printf("%d", ft_str_is_uppercase("2"));
// 	printf("%d", ft_str_is_uppercase(""));
// }
