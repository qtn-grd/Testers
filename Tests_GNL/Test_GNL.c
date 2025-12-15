/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qgairaud <qgairaud@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 21:08:53 by qgairaud          #+#    #+#             */
/*   Updated: 2025/12/05 21:09:13 by qgairaud         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// / POUR LIRE TOUT UN FICHIER ///

// int	main(void)
// {
// 	int		fd;
// 	char	*line;

// 	fd = open("my_file.txt", O_RDONLY);
// 	if (fd < 0)
// 		return (1);
// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		printf("%s", line);
// 		free(line);
// 	}
// 	close(fd);
// 	return (0);
// }

/// POUR LIRE X LIGNES D'UN FICHIER ///

// int	main(void)
// {
// 	char	*line;
// 	int		fd;
// 	int		x;

// 	x = 0;
// 	fd = open("my_file.txt", O_RDONLY);
// 	if (fd < 0)
// 		return (1);
// 	while (x < 2)
// 	{
// 		line = get_next_line(fd);
// 		printf("%s", line);
// 		free(line);
// 		x++;
// 	}
// 	close(fd);
// 	return (0);
// }

/// POUR VERIFIER L'ABSENCE DE FUITES DE MEMOIRE ///

// int	main(void)
// {
// 	char	*line;
// 	int		fd;

// 	fd = open("test.txt", O_RDONLY);
// 	if (fd < 0)
// 		return (1);
// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		free(line);
// 	}
// 	close(fd);
// 	return (0);
// }

/// POUR TESTER STDIN ///
/// penser à rediriger aussi un fichier < ///

int	main(void)
{
	char	*line;

	while ((line = get_next_line(0)))
	{
		printf("LINE = %s", line);
		free(line);
	}
	return (0);
}
