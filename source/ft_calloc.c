/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <tda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:15:35 by tda-silv          #+#    #+#             */
/*   Updated: 2023/01/05 12:36:54 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	tab = malloc(nmemb * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab;

	tab = *(int *)ft_calloc(1, sizeof(int));
	printf("\n%d\n\n", tab);
	return (0);
}
*/
