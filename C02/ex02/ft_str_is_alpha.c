/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- < gdaniel-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:43:02 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/12 15:37:36 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_no_repeat(char str, int *ptr)
{
	if (!((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z')))
		*ptr = 0;
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	check;
	int	*ptr;

	check = 1;
	ptr = &check;
	i = 0;
	while (str[i] != '\0')
	{
		ft_no_repeat(str[i], ptr);
		if (check == 0)
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
// 	char	*str = "";

// 	value = ft_str_is_alpha(str);
// 	printf("%d", value);	
// }
