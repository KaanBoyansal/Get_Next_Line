/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboyansa <mboyansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:50:10 by mboyansa          #+#    #+#             */
/*   Updated: 2023/04/13 21:50:04 by mboyansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

unsigned int	ft_strlen(const char *str);
char			*ft_strjoin(char *s1, char *s2);
char			*make_line(char *str);
char			*trim_str(char *str);
unsigned int	str_check(char *str);
int				check(char *str);
void			*get_free(void *str);
char			*get_next_line(int fd);

#endif