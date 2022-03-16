/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:44:13 by tda-silv          #+#    #+#             */
/*   Updated: 2022/03/16 12:22:21 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		j++;
	return (j);
}

static size_t	ft_split_piii(size_t nbc, char **ssplit, char const *s, char c)
{
	size_t	i;
	size_t	j;

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

static int	ft_split_pii(size_t nbc, char **ssplit, char const *s, char c)
{
	size_t	i;
	size_t	j;

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
					free(ssplit[i--]);
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
	char	**ssplit;
	size_t	nbc;

	if (!s)
		return (NULL);
	if (!s[0])
	{
		ssplit = malloc(1);
		if (!ssplit)
			return (NULL);
		ssplit[0] = NULL;
		return (ssplit);
	}
	nbc = ft_nbc(s, c);
	ssplit = (char **) malloc(sizeof (char *) * nbc);
	if (!ssplit)
	{
		free(ssplit);
		return (NULL);
	}
	if (nbc > 1)
		if (ft_split_pii(nbc - 1, ssplit, s, c))
			return (NULL);
	ssplit[ft_split_piii(nbc - 1, ssplit, s, c)] = 0;
	return (ssplit);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
//	char	s[] = "";
	char	**ssplit = NULL;

	ssplit = ft_split(argv[1], argv[2][0]);
	printf("\ns:%s\nc:%c\n", argv[1], argv[2][0]);
	printf("\n[0]%s\n", ssplit[0]);
	for (int i = 1; ssplit[i]; i++)
		printf("\n[%d]%s\n", i, ssplit[i]);
	free(ssplit);

	return (0);
}
*/
