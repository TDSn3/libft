/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:32:40 by tda-silv          #+#    #+#             */
/*   Updated: 2021/11/25 21:12:20 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

size_t	ft_strlen(const char *s);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (size == 1)
		*dst = '\0';
	else if (size > 1)
	{
		ft_memcpy(dst, src, size);
		if (size < ft_strlen(src))
			dst[ft_strlen(dst) - 1] = '\0';
	}	

	return (ft_strlen(src));
}

#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*tab = "Cool";
	char	*tab2 = malloc(5);
	char	*tab3 = malloc(5);

	printf("\n");
	printf("\t| %s ", tab);
	printf("\n\n----\n\n");
	printf("strlcpy\t| %s ", tab2);
	printf("\n");
	printf("ft_\t| %s ", tab3);
	printf("\n\n----\n\n");

//----
	strlcpy(tab2, tab, 90);
//----

	printf("strlcpy\t||%s ", tab2);
	printf("\n");

//----
	ft_strlcpy(tab3, tab, 90);
//----
	
	printf("ft_\t||%s ", tab3);
	printf("\n\n");

	free(tab2);
	free(tab3);	
	return (0);
}
