/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaniel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:37:14 by gdaniel-          #+#    #+#             */
/*   Updated: 2023/02/19 14:12:19 by gdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *s)
{

	int	i;

	i = 0;
	while (*s++)
	{
		i++;
	}
	return (i);

}




char	*ft_strdup(char *src)
{

	char	*new;
	int	i;

	i = 0;
	if(!(new = (char*)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return NULL;
	while (*src)
		new[i++] = *src++;
	new[i] = '\0';
	return(new);

} 

int	main(int argc, char **argv)
{
	char *mine;
	char *theirs;

	if(argc == 2)
	{
		mine = ft_strdup(argv[1]);
		theirs = ft_strdup(argv[1]);
		printf(":%s:\n:%s:\n", mine, theirs);
	}
	return(0);
}
