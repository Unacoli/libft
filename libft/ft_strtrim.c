/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 16:37:04 by nargouse          #+#    #+#             */
/*   Updated: 2021/01/22 16:26:39 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_start(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i] == 0))
			break;
		i++;
	}
	return (i);
}

static int	ft_end(const char *s1, const char *set)
{
	size_t len;
	size_t i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len -i - 1] == 0))
			break;
		i++;
	}
	return (len - i);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		len_start;
	int		len_end;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	len_start = ft_start(s1, set);
	len_end = ft_end(s1, set);
	if (len_start >= len_end)
		return (ft_strdup(""));
	if(!(result = (char *)malloc(sizeof(char) * (len_end - len_start + 1))))
		return (NULL);
	ft_strlcpy(result, s1 + len_start, len_end - len_start + 1);
	return (result);
}
