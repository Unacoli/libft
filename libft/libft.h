/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 17:38:36 by nargouse          #+#    #+#             */
/*   Updated: 2021/01/15 18:08:18 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_strlen(char const *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isalpha(int c);
int				ft_isprint(int c);
char			*ft_itoa(int n);
int				ft_atoi(const char *str);
void			*ft_calloc(size_t nmemb, size_t size);
void			*ft_bzero(void *s, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

#endif
