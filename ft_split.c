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
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

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
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	s2 = ft_strtrim(s, &c);
	nbc = size_nbc(s2, c);

	ssplit = (char **) malloc(sizeof (char *) * nbc + 1);	
	while (i < nbc + 1)
	{
		ssplit[i] = malloc (cstrlen(s2, c));
		i++;
	}
	i = 0;
	while (i < nbc)
	{
		ft_strlcpy(ssplit[i], s2 + j, cstrlen(s2 + j, c));
		j += cstrlen(s2, c);
		i++;
	}
	ssplit[i] = 0;
	free (s2);
	return (ssplit);
}

int	main(void)
{
	char	s[] = "--Super-test---";
	char	**ssplit = NULL;

	ssplit = ft_split(s, '-');
	printf("\n%s\n", s);
	for (int i = 0; i < 3; i++)
		printf("\n%s\n", ssplit[i]);

	free(ssplit);

	return (0);
}
