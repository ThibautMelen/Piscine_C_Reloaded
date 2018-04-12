/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 21:05:08 by thmelen           #+#    #+#             */
/*   Updated: 2018/04/04 21:05:13 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dfile.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	buf[BUF_SIZE];

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		i = read(fd, buf, BUF_SIZE);
		buf[i] = '\0';
		ft_putstr(buf);
	}
	else if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	return (0);
}
