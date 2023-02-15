/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- < gdaniel-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:53:18 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/15 12:51:38 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	whitespaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str [i] <= 13) || str[i] == 32)
		i++;
	while((str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = whitespaces(str, &i);
	while (str[i] && str [i] >= 48 && str [i] <= 57)
	{
		result *= 10;
		result += str [i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}

int	main()
{
	char	*s = "  ---+--+1234ab567";
	printf ("%d", ft_atoi(s));
}
