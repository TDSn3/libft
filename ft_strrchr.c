/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:22:50 by tda-silv          #+#    #+#             */
/*   Updated: 2021/12/28 09:26:55 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
#define SEARCH 's'

int main(void)
{
    char    tab[] = "saluts";
    printf("\n-- strrchr :%d", strrchr(tab, SEARCH));
    printf("\nft_strrchr :%d ", ft_strrchr(tab, SEARCH));
    strrchr(tab, SEARCH) == ft_strrchr(tab, SEARCH) ? 
printf("OK\n\n") : printf("NO\n\n");
    return (0);
}
*/
