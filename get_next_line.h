/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klakbuic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 08:48:21 by klakbuic          #+#    #+#             */
/*   Updated: 2023/11/21 10:12:16 by klakbuic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	size_t			size;
	struct s_list	*next;
}					t_list;

typedef struct s_line
{
	t_list			*head;
	int				found;
}					t_line;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif

char				*get_next_line(int fd);
void				*ft_memcpy(void *dest, const void *src, size_t n);
char				*ft_substr(char const *s, unsigned int start, size_t len);
int					nl_index(char *buff);
int					is_found(char *buff);
size_t				ft_strlen(const char *str);
#endif
