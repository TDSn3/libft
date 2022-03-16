/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:11:42 by tda-silv          #+#    #+#             */
/*   Updated: 2022/03/16 12:41:38 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_setsize_l(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1)
		return (0);
	i = 0;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static size_t	ft_setsize_r(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1)
		return (0);
	i = ft_strlen(s1);
	j = 0;
	if (i > 0)
		i--;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	size_t	i;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = (ft_setsize_r(s1, set) + 1) - ft_setsize_l(s1, set) + 1;
	if ((ft_setsize_r(s1, set) + 1) < ft_setsize_l(s1, set) + 1)
		return (ft_strdup(""));
	copy = malloc(i);
	if (!copy)
		return (NULL);
	if (s1)
		ft_strlcpy(copy, s1 + ft_setsize_l(s1, set), i);
	else
		copy = 0;
	return (copy);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "-12-3--";
	char	*s11 = ft_strtrim(s1, "-");

	printf("\n%s\n\n", s11);
	free(s11);
	return (0);
}
*/
