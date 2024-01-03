/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:05:09 by gudaniel          #+#    #+#             */
/*   Updated: 2023/12/21 14:30:30 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] < 127))
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
// 	printf("%d", ft_str_is_printable("asdsadkjaskdljlkasj"));
//     printf("%d", ft_str_is_printable("ASJKASDASDLVCX"));
// 	printf("%d", ft_str_is_printable("2"));
// 	printf("%d", ft_str_is_printable("Ç"));
//     printf("%d", ft_str_is_printable(""));
// }
