/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:44:13 by tda-silv          #+#    #+#             */
/*   Updated: 2021/12/28 14:02:11 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);

static size_t	size_nbc(char *s2, char c)
{
	size_t	i;
	size_t	nbc;

	i = 0;
	nbc = 1;
	if (!s2 || ft_strlen(s2) == 0)
		return (0);
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

static size_t	cstrlen(char *s2, char c)
{
	size_t	i;

	i = 0;
	while (s2[i] && s2[i] != c)
		i++;
	return (i + 1);
}

static size_t	ft_split_part_three(size_t nbc, char **ssplit, char *s2, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < nbc)
	{
		ft_strlcpy(ssplit[i], s2 + j, cstrlen(s2 + j, c));
		j += cstrlen(s2 + j, c);
		while (*(s2 + j) == c)
			j++;
		i++;
	}
	return (i);
}

static int	ft_split_part_two(size_t nbc, char **ssplit, char *s2, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < nbc + 1)
	{
		ssplit[i] = malloc (cstrlen(s2 + j, c));
		if (!ssplit[i])
		{
			while (i > 0)
			{
				free(ssplit[i]);
				i--;
			}
			free(ssplit);
			free(s2);
			return (1);
		}
		j += cstrlen(s2 + j, c);
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	*s2;
	size_t	nbc;
	char	**ssplit;
	size_t	i;

	s2 = ft_strtrim(s, &c);
	nbc = size_nbc(s2, c);
	ssplit = (char **) malloc(sizeof (char *) * nbc + 1);
	if (!ssplit)
	{
		free(s2);
		return (NULL);
	}
	if (nbc > 0)
		if (ft_split_part_two(nbc, ssplit, s2, c))
			return (NULL);
	i = ft_split_part_three(nbc, ssplit, s2, c);
	ssplit[i] = 0;
	free (s2);
	return (ssplit);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
//	char	s[] = "";

	char	**ssplit = NULL;

	ssplit = ft_split(argv[1], '-');
	printf("\ns:%s\n", argv[1]);
	printf("\n[0]%s\n", ssplit[0]);
	for (int i = 1; ssplit[i]; i++)
		printf("\n[%d]%s\n", i, ssplit[i]);

	free(ssplit);

	return (0);
}
*/
