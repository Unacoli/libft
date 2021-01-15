/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 13:20:01 by nargouse          #+#    #+#             */
/*   Updated: 2021/01/15 16:48:09 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_total_len(int size, char **strs, char *sep)
{
	int sep_len;
	int strs_len;
	int i;

	sep_len = 0;
	while (sep[sep_len])
		sep_len++;
	strs_len = 0;
	i = 0;
	while (i < size)
	{
		strs_len += ft_strlen(strs[i]);
		i++;
	}
	return (strs_len + (sep_len * (size - 1)));
}

char	*ft_make_str(int size, char **strs, char *sep, int total_len)
{
	char	*result;
	int		i;
	int		j;
	int		k;

	if ((result = (char *)malloc(sizeof(char *) * (total_len + 1))) == NULL)
		return (NULL);
	k = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		j = 0;
		while (i < size - 1 && sep[j])
		{
			result[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}
	result[k] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		len;

	if (size == 0)
	{
		if ((result = (char *)malloc(sizeof(char *) * 1)) == NULL)
			return (NULL);
		result[0] = '\0';
	}
	else
	{
		len = ft_total_len(size, strs, sep);
		result = ft_make_str(size, strs, sep, len);
	}
	return (result);
}
