/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:14:02 by tda-silv          #+#    #+#             */
/*   Updated: 2021/11/29 15:28:01 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big , const char *little , size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + j] == litlle[j] && i + j < len)
		{
			j++;
			if ( little[j] == '\0')
				return ((char *)big + i);
		}
		j = 0;
		i++;
	}
	retun ('\0');
}

int	main(void)
{
	return (0);
}
