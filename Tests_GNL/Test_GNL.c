/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test_GNL.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 21:08:53 by qgairaud          #+#    #+#             */
/*   Updated: 2026/01/06 21:44:09 by quentin          ###   ########.fr       */
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


/// POUR TESTER STDIN ///
/// penser à rediriger aussi un fichier < ///

// int	main(void)
// {
// 	char	*line;

// 	while ((line = get_next_line(0)))
// 	{
// 		printf("LINE = %s", line);
// 		free(line);
// 	}
// 	return (0);
// }

/// POUR TESTER des bonus ///
/// et lire deux fichiers en entier en alternant leurs lignes///

// #include "get_next_line_bonus.h"

// int     main(void)
// {
//     int     fd1;
//     int     fd2;
//     int     x;
//     char    *line1;
//     char    *line2;

//     x = 0;
//     fd1 = open("my_file1.txt", O_RDONLY);
//     fd2 = open("my_file2.txt", O_RDONLY);
//     if (fd1 < 0 || fd2 < 0)
//         return (1);
//     while (x < 5)
//     {
//         line1 = get_next_line(fd1);
//         line2 = get_next_line(fd2);

//         if (!line1 && !line2)
//             break;

//         if (line1)
//         {
//             printf("%s", line1);
//             free(line1);
//         }
//         if (line2)
//         {
//             printf("%s", line2);
//             free(line2);
//         }
//         x++;
//     }
//     close(fd1);
//     close(fd2);
//     return (0);
// }