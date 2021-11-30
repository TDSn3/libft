/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:22:17 by tda-silv          #+#    #+#             */
/*   Updated: 2021/11/30 18:47:21 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*copy;

	ft_memcpy(copy, src, n);
	ft_memcpy(dest, copy, n);
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
//----

	int tab[] = { 10, 15, 30, 0};
  
	printf("\n");

	for (int i = 0; i < 4; i++)
		printf("%d ", tab[i]);

	printf("\n\n");

	void *cpy = (void *) (tab + 1);

	memmove(cpy, tab, 16);

	tab[0] = 5;

	for (int i = 0; i < 4; i++)
		printf("%d ", tab[i]);

	printf("\n\n");

//----

	int tab2[] = { 10, 15, 30, 0};
  
	printf("\n");

	for (int i = 0; i < 4; i++)
		printf("%d ", tab2[i]);

	printf("\n\n");

	void *cpy2 = (void *) (tab2 + 1);

	ft_memmove(cpy2, tab2, 16);

	tab2[0] = 5;

	for (int i = 0; i < 4; i++)
		printf("%d ", tab2[i]);

	printf("\n\n");
	return (0);
}
*/
