/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:11:42 by tda-silv          #+#    #+#             */
/*   Updated: 2021/12/02 18:07:15 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_setsize_l(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

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

size_t	ft_setsize_r(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

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
	if (i > 0)
		return (i + 1);
	else
		return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	size_t	i;

	i = ft_setsize_r(s1, set) - ft_setsize_l(s1, set) + 1;
	copy = malloc(i);
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, s1 + ft_setsize_l(s1, set), i);
	return (copy);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "aTESTz";
	char	*s11 = ft_strtrim(s1, "az");

	printf("\n%s\n\n", s11);
	return (0);
}
*/
