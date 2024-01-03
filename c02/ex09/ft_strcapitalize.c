/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:40:22 by gudaniel          #+#    #+#             */
/*   Updated: 2023/12/21 14:30:22 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

int	ft_c_is_alpha(char c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	return (1);
}

int	ft_c_is_numeric(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	ft_lower(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (ft_c_is_alpha(str[i]))
				str[i] -= 32;
		}
		else if (ft_c_is_alpha(str[i]) && !ft_c_is_alpha(str[i - 1])
			&& !ft_c_is_numeric(str[i - 1]))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
// int	main()
// {
// 	char	src[] = "ola, tudo bem? 42palavRas quarentA-e-duas; cinquenta+e+um";
// 	printf("%s", ft_strcapitalize(src));
// }
