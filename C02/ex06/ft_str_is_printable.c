/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- < gdaniel-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:44:54 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/12 15:10:29 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32 && str[i] <= 126)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	int	value;
// 	char	*str = "TUDOMISCULO";

// 	value = ft_str_is_printable(str);
// 	printf("%d", value);
// }
