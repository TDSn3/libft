/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:01:21 by tda-silv          #+#    #+#             */
/*   Updated: 2021/12/11 15:42:56 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *s);

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
/*
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

// CREE UN FICHIER "test.txt" //

int		main(void)
{
	int		fd;
	char	buf[128];
	int		size;
	
	fd = open("test.txt", O_RDWR);
	if (fd == -1)
		return (1);
	size = read(fd, buf, 127);
	write(1, "\n", 1);
	write(1, buf, size);
	write(1, "\n\n", 2);
	buf[size] = 0;

	ft_putstr_fd("Test", fd);

	close(fd);
	return (0);
}
*/
