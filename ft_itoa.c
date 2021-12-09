/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:51:54 by tda-silv          #+#    #+#             */
/*   Updated: 2021/12/09 18:43:47 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //
#include <stdlib.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);

void	ft_mirror(char *s)
{
	size_t	start;
	size_t	end;
	int		copy;

	start = 0;
	end = ft_strlen(s) - 1;
	while (start < end)
	{
		copy = s[start];
		s[start] = s[end];
		s[end] = copy;
		start++;
		end--;
	}
}

char	*ft_itoa(int n)
{
	int		n_size;
	int		n2;
	int		i;
	int		j;
	int		negative;
	char	*s;

	i = 0;
	j = 1;
	n_size = 0;
	negative = 0;
	if (n == -0)
		n_size++;
	if (n <= 0)
	{
		n_size++;
		n *= -1;
		negative = 1;
	}
	n2 = n;
	while (n2 > 0)
	{
		n2 = n2 / 10;
		n_size++;
	}
	s = malloc(n_size + 1);
	if (!s)
		return (NULL);
	while (i < n_size)
	{
		s[i] = ((n / j) % 10) + 48;
		j = j * 10;
		i++;
	}
	s[i] = 0;
	ft_mirror(s);
	if (negative)
	{
		s[0] = '-';
		i++;
	}
	return (s);
}

int	main(void)
{
	char	*s = ft_itoa(-2147483648);
	printf("\ns:%s\n\n", s);
	free(s);
	return (0);
}
