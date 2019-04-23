/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   content.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:32:51 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/05 18:44:08 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "head.h"

#define BUF_SIZE 10

int		error(int argc)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		res;
	char	buf[BUF_SIZE + 1];

	if (error(argc) != 0)
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "open() error\n", 13);
		return (0);
	}
	while ((res = read(fd, buf, BUF_SIZE)))
	{
		buf[res] = '\0';
		ft_putstr(buf);
	}
	close(res);
	return (0);
}
