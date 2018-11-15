/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:13:29 by mabouce           #+#    #+#             */
/*   Updated: 2018/11/06 16:20:02 by mabouce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(int ac, char **av)
{
	int		fd;
	int		i;
	char	buff;

	i = 1;
	if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	if (ac < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (1);
	while (read(fd, &buff, 1))
		write(1, &buff, 1);
	if (close(fd) == -1)
		return (1);
	return (0);
}
