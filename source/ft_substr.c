/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <tda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:51:15 by tda-silv          #+#    #+#             */
/*   Updated: 2023/01/05 13:16:17 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/* ************************************************************************** */
/*																			  */
/*   Duplique la chaîne 's'													  */
/*   Commence à l'index 'start' et a pout taille max 'len'.					  */
/*																			  */
/* ************************************************************************** */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;
	size_t	flen;

	if (!s || start > ft_strlen(s) - 1)
	{
		copy = malloc(1);
		if (!copy)
			return (NULL);
		*copy = 0;
		return (copy);
	}
	flen = ft_strlen(s + start);
	if (len < flen)
		flen = len;
	copy = malloc(flen + 1);
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, s + start, flen + 1);
	return (copy);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "0123456789";
	char	*copy1 = ft_substr(s1, 0, 10);

	printf("\n%s\n\n", copy1);
	free(copy1);
	return (0);
}
*/
