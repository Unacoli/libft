/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 17:38:36 by nargouse          #+#    #+#             */
/*   Updated: 2021/01/07 17:49:52 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_strlen(char *str);
int				ft_isalpha(char c);
int				ft_isdigit(char c);

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

#endif
