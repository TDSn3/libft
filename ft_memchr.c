/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:09:33 by tda-silv          #+#    #+#             */
/*   Updated: 2021/11/30 18:42:36 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *)s)[i] && i < n)
	{
		if (((char *)s)[i] == c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FOUND 33

int 	main (void)
{
	char 	tab[] = { 5, 10, 15, 20, 25 };
	
	printf("\n%s\n", (memchr(tab, FOUND, 5) != NULL ? "Found" : "Not found"));
	printf("\n%s\n\n", (ft_memchr(tab, FOUND, 5) != NULL ? "Found" : "Not found"));

//	NE MARCHE QU'AVEC DES VALEURS TROUVABLES

//	printf("\n%d\n", *(char *)memchr(tab, FOUND, 5));
//	printf("\n%d\n\n", *(char *)ft_memchr(tab, FOUND, 5));
	return (0);
}
*/
