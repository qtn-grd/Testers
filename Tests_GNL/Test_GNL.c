/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test_GNL.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentin <quentin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 21:08:53 by qgairaud          #+#    #+#             */
/*   Updated: 2026/01/11 12:01:58 by quentin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


///     MANDATORY VERSION ///

// #include "get_next_line.h"
// #include <fcntl.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>

/// POUR LIRE TOUT UN FICHIER ///

// int	main(void)
// {
// 	int		fd;
// 	char	*line;

// 	fd = open("my_file.txt", O_RDONLY);
// 	if (fd < 0)
// 		return (1);
	// while ((line = get_next_line(fd)) != NULL)
	// {
	// 	printf("%s", line);
	// 	free(line);
	// }
	// close(fd);
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


/// POUR TESTER STDIN = fd(0) ///
/// penser à rediriger aussi un fichier sinon< ///

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


///     BONUS VERSION ///

// #include "get_next_line_bonus.h"
// #include <fcntl.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>

/// POUR LIRE DEUX FICHIERS L'UN APRES L'AUTRE ///

// int     main(void)
// {
//     int     fd1;
//     int     fd2;
//     char    *line1;
//     char    *line2;

//     fd1 = open("my_file1.txt", O_RDONLY);
//     fd2 = open("my_file2.txt", O_RDONLY);
//     if (fd1 < 0 || fd2 < 0)
//         return (1);
// 	while ((line1 = get_next_line(fd1)) != NULL)
// 	{
// 		printf("%s", line1);
// 		free(line1);
// 	}
// 	while ((line2 = get_next_line(fd2)) != NULL)
// 	{
// 		printf("%s", line2);
// 		free(line2);
// 	}
//     close(fd1);
//     close(fd2);
//     return (0);
// }

/// POUR LIRE DEUX FICHIERS EN LES ALTERNANT LIGNE PAR LIGNE ///

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

/// POUR LIRE X FOIS LE MEME FICHIER (max 1024 fois) ///

#define NB_FILES 42

int	main(void)
{
	int		fd[NB_FILES];
	char	*line;
	int		x;
	int		end;

    x = 0;
    while (x < NB_FILES)
    {
	    fd[x] = open("my_file1.txt", O_RDONLY);
        if (fd[x] < 0)
            return (1);
        x++;
    }
    end = 0;
    while (!end)
    {
        end = 1;
        x = 0;
		while (x < NB_FILES)
		{
			line = get_next_line(fd[x]);
			if (line)
			{
				printf("fd %d = %s", x, line);
				free(line);
				end = 0;
			}
			x++;
		}
	}
    x = 0;
    while (x < NB_FILES)
    {
        close(fd[x]);
        x++;
    }
	return (0);
}
