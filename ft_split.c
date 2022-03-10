/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:44:13 by tda-silv          #+#    #+#             */
/*   Updated: 2022/03/10 17:39:56 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);

static size_t	ft_cstrlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i + 1);
}

static size_t	ft_nbc(char const *s, char c)
{
	unsigned int	i;
	size_t			j;

	i = 0;
	j = 1;
	if (!s)
		return (1);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			j++;
				while (s[i] && s[i] == c)
					i++;
				continue;
		}
		i++;
	}
	if (s[i - 1] != c)
		j++;
	return (j);
}

static size_t	ft_split_part_three(size_t nbc, char **ssplit, char const *s, char c)
{
	size_t  i;
	size_t  j;

	i = 0;
	j = 0;
	while (i < nbc)
	{
		while (*(s + j) == c)
			j++;
		ft_strlcpy(ssplit[i], s + j, ft_cstrlen(s + j, c));
		j += ft_cstrlen(s + j, c);
		i++;
	}
	return (i);
}

static int	ft_split_part_two(size_t nbc, char **ssplit, char const *s, char c)
{
	size_t  i;
	size_t  j;

	i = 0;
	j = 0;

	while (s[j] && i < nbc)
	{
		if (s[j] != c)
		{
			ssplit[i] = malloc (ft_cstrlen(s + j, c));
			if (!ssplit[i])
			{
				while (i > 0)
				{
					free(ssplit[i]);
					i--;
				}
				free(ssplit);
				return (1);
			}
			j += ft_cstrlen(s + j, c);
			i++;
		}
		else
			j++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char 	**ssplit;
	size_t	nbc;
	size_t  i;

	i = 0;
	if (!s || !s[0])
		return ((char **)ft_strdup(""));
	nbc = ft_nbc(s, c);
	ssplit = (char **) malloc(sizeof (char *) * nbc);
	if (!ssplit)
	{
		free(ssplit);
		return (NULL);
	}
	if (nbc > 1)
		if (ft_split_part_two(nbc - 1, ssplit, s, c))
			return (NULL);
	i = ft_split_part_three(nbc - 1, ssplit, s, c);
	ssplit[i] = 0;	
	return (ssplit);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
//	char	s[] = "";
	char	**ssplit = NULL;

	argv[1][6] = 0;
	ssplit = ft_split(argv[1], argv[2][0]);
	printf("\ns:%s\n", argv[1]);
	printf("\n[0]%s\n", ssplit[0]);
	for (int i = 1; ssplit[i]; i++)
		printf("\n[%d]%s\n", i, ssplit[i]);
	free(ssplit);

	return (0);
}
*/
