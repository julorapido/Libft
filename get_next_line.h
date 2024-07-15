/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:52:22 by julessainthor     #+#    #+#             */
/*   Updated: 2024/07/15 15:47:15 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define  BUFFER_SIZE 12
# endif

/*
char	*get_next_line(int fd);
*/

char	*ft_strchr(const char *string, int searchedChar );
void	*ft_calloc(size_t elementCount, size_t elementSize);

#endif
