/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:22:17 by tda-silv          #+#    #+#             */
/*   Updated: 2021/12/13 13:52:44 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (d > s)
	{
		while (n)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
//----

	int tab[] = { 10, 15, 30, 0};
  
	printf("\n");

	for (int i = 0; i < 4; i++)
		printf("%d ", tab[i]);

	printf("\n\n");

	void *cpy = (void *) (tab + 0);

	memmove(cpy, tab + 8, 16);

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

	void *cpy2 = (void *) (tab2 + 0);

	ft_memmove(cpy2, tab2 + 8, 16);

	tab2[0] = 5;

	for (int i = 0; i < 4; i++)
		printf("%d ", tab2[i]);

	printf("\n\n");

//----

	char	tab3[] = "012";
	printf("\n---\n\n%s\n", tab3);
	ft_memmove(tab3, tab3 + 1, 2);
	printf("%s\n\n", tab3);
	
	char	tab4[] = "012";
	printf("\n---\n\n%s\n", tab4);
	memmove(tab4, tab4 + 1, 2);
	printf("%s\n\n", tab4);
	
	return (0);
}
*/
