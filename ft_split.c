/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:44:13 by tda-silv          #+#    #+#             */
/*   Updated: 2021/12/03 18:15:43 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h> //

char	*ft_strtrim(char const *s1, char const *set);

size_t	size_nbc(char *s2, char c)
{
	size_t	i;
	size_t	nbc;

	i = 0;
	nbc = 1;
	while (s2[i])
	{
		if (s2[i] == c)
		{
			nbc++;
			while (s2[i] == c)
				i++;
		}
		else
			i++;
	}
	return (nbc);
}


size_t	cstrlen(char *s2, char c)
{
	size_t	i;

	i = 0;
	while (s2[i] && s2[i] != c)
		i++;
	return (i + 1);
}

char	**ft_split(char const *s, char c)
{
	char 	*s2;
	size_t	nbc;
	char	**ssplit;

	s2 = ft_strtrim(s, &c);
	nbc = size_nbc(s2, c);

	*ssplit = malloc (nbc + 1);
	while (nbc)
	{
		*ssplit = malloc (cstrlen(s2, c));
		nbc--;
	}

	
	printf("\n%s | %ld || %ld\n\n", s2, nbc, cstrlen(s2, c));
	free (s2);
}

int	main(void)
{
	char	s[] = "--Sa-l--ut-";
//	char	**ssplit;
	int		i = 0;

/*	ssplit = */ft_split(s, '-');
//	for (i = 0, *ssplit[i], i++;)
//		printf("\n%s\n\n", *ssplit[i]);
//	free(ssplit);
	printf("\n%s\n\n", s);
	return (0);
}
