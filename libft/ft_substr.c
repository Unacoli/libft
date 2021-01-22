/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 16:32:13 by nargouse          #+#    #+#             */
/*   Updated: 2021/01/22 15:16:46 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dst;
	
	if (s == NULL)
		return (NULL);
	if (!(dst = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	if (!(ft_strlen(s) < start))
	{
		while (i < len && s[i + start])
		{
			dst[i] = s[i + start];
			i++;
		}
	}
	dst[i] = '\0';
	return (dst);
}
