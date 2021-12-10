/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:18:30 by tda-silv          #+#    #+#             */
/*   Updated: 2021/12/10 16:10:26 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	ft_add(unsigned int nbr, char c)
{
	char	c2;
	c2 = c;
	c2 += nbr;
	return (c2);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	size_t	i;

	s2 = malloc(ft_strlen(s) + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		s2[i] = *f;
		i++;
	}
	s2[i] = 0;
	return (s2);
}

#include <stdio.h>

int	main(void)
{
	char	c;
	c = ft_add(1, 'a');
	printf("\n%c\n\n", c);

	char	c2[] = "0abcdefghijkklmnopqrstuvwxy0";
	char	*c3;
	
	char	(*f)(unsigned int, char);
	f = ft_add;
	(*f)(1, 'c');
	
	c3 = ft_strmapi(c2, f);
	printf("\n%s\n", c3);
	free(c3);
	return (0);
}
