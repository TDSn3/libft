/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:08:16 by tda-silv          #+#    #+#             */
/*   Updated: 2021/11/30 16:46:50 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
			return (((char *)s1)[i] - ((char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

#define NCHAR 5
#define NINT 20

int	main(void)
{
	char	tab1[] = "Salut";
	char	tab2[] = "Salut";
	int		tab11[5] = { 10, 15, 20, 25, 30 };
	int		tab22[5] = { 10, 15, 20, 25, 30 };
	
	printf("\n%d | %d\n", memcmp(tab1, tab2, NCHAR), 
ft_memcmp(tab1, tab2, NCHAR));
	printf("%s\n", (memcmp(tab1, tab2, NCHAR) == 
ft_memcmp(tab1, tab2, NCHAR) ? "OK" : "NO"));
	
	printf("\n%d | %d\n", memcmp(tab11, tab22, NINT), 
ft_memcmp(tab11, tab22, NINT));
	printf("%s\n\n", (memcmp(tab11, tab22, NINT) == 
ft_memcmp(tab11, tab22, NINT) ? "OK" : "NO"));
	
	return(0);
}
*/
