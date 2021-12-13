/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:51:15 by tda-silv          #+#    #+#             */
/*   Updated: 2021/12/13 13:27:34 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;

	copy = malloc(ft_strlen(s));
	if (!copy)
		return (NULL);
	if (!s || start > ft_strlen(s))
		return (copy);
	ft_strlcpy(copy, s + start, len);
	return (copy);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*copy1 = ft_substr(s1, 5, 10);

	printf("\n%s\n\n", copy1);
	return (0);
}
*/
