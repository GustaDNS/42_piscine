/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- < gdaniel-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:38:42 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/13 16:52:42 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    int x;

    x = 0;
    while (str[x] != '\0')
    {
        write (1, &str[x], 1);
        x++;
    }
}
// int main ()
// {
//     char    *c = "I love code in C\n";
//     ft_putstr(c);
// }