/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- < gdaniel-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:02:53 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/13 12:15:38 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
 
int strcmp(const char *s1, const char *s2)
{
    while (*s1)
    {
        if (*s1 != *s2) 
		{
            break;
        }
        s1++;
        s2++;
    }
 
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}
int main()
{
    char *s1 = "Tech";
    char *s2 = "Tech";
 
    int ret = strcmp(s1, s2);
 
    if (ret > 0) {
        printf("%s", "s1 is greater than s2");
    }
    else if (ret < 0) {
        printf("%s", "s1 is less than s2");
    }
    else {
        printf("%s", "s1 is equal to s2");
    }
 
    return 0;
}