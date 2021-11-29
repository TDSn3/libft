/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:21:10 by tda-silv          #+#    #+#             */
/*   Updated: 2021/11/29 12:43:14 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	a;
	size_t	b;

	i = 0;
	a = 0;
	b = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i])
			a += s1[i];
		if (s2[i])
			b += s2[i];
		if (a != b)
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main (void)
{
	char	tab1[] = "U\t--";
	char	tab2[] = "--\tU";
	int		a = strncmp(tab1 , tab2, 100);
	int		b = ft_strncmp(tab1 , tab2, 100);

	printf ("\n%d, %d\n\n", a, b);
	return (0);
}
*/
