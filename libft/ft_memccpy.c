/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 18:27:49 by nargouse          #+#    #+#             */
/*   Updated: 2021/01/08 17:47:56 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == c)
			return (dest[i + 1]);
		i++;
	}
	return (NULL);
}
