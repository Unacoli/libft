/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 13:18:41 by nargouse          #+#    #+#             */
/*   Updated: 2021/01/22 13:16:48 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_allocation_error(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static int	ft_cmp(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

static int	ft_total_length(char const *s, char c, int start, int len)
{
	int i;

	i = 0;
	while (start < len)
	{
		if (ft_cmp(&s[start], c) == 0)
			break ;
		start++;
		i++;
	}
	return (i);
}

char		**ft_split(char const *s, char c)
{
	char			**tab;	
	unsigned int	len;
	unsigned int	total_length;
	unsigned int	i;
	char			*new_str;

	i = 0;
	len = ft_strlen(s);
	new_str = (char *)s;
	if (!(tab = (char**)malloc(sizeof(char*) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		total_length = ft_total_length(s, c, i, len);
		if (ft_cmp(&s[i], c) == 0)
			i++;
		else
		{
			if(!(tab[i] = (char *)malloc(sizeof(char) * (total_length + 1))))
				return (ft_allocation_error(tab));
			ft_strlcpy(tab[i], new_str, total_length + 1);
			i++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
