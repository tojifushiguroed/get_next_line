/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:50:00 by egolboyu          #+#    #+#             */
/*   Updated: 2023/12/18 16:24:27 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int		ft_strlen(char *s);
char	*ft_newline(char *buffer);
char	*ft_read(int fd, char *buffer);
char	*get_next_line(int fd);
char	*ft_line(char *buffer);

char	*ft_strchr(char *s, char c);
char	*ft_strjoin(char *s1, char *s2);

#endif
