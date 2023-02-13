/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- < gdaniel-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:34:56 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/12 15:39:29 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_other_chars(char c, int *ptr)
{
	if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
		*ptr = 1;
	else
		*ptr = 0;
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		next;
	int		*ptr;
	char	c;

	i = 0;
	next = 1;
	ptr = &next;
	while (str[i] != '\0')
	{
		c = str[i];
		if (next == 1 && (c >= 'a' && c <= 'z'))
			str[i] = str[i] - 32;
		else if (next == 0 && (c >= 'A' && c <= 'Z'))
			str[i] = str[i] + 32;
		ft_other_chars(c, ptr);
		i++;
	}
	return (str);
}
// int	main(void)
// {
// 	char	str[] = "OLA, tudo BEM? 42palavras QUARENTA-e-duas; cinquenta+E+UM";
// 	char	*print;
// 	int	i;

// 	print = ft_strcapitalize(str);
// 	printf("%s", print);
// }
