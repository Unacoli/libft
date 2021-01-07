/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 13:18:41 by nargouse          #+#    #+#             */
/*   Updated: 2021/01/07 17:35:51 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

int		ft_compare(char *s, char c)
{
	int i;
	int charset_size;

	i = 0;
	charset_size = 1;
	while (i < charset_size)
	{
		if (*(s) == (c + i))
			return (0);
		i++;
	}
	return (1);
}

int		ft_get_row_size(char const *s, char c, int start)
{
	int i;
	int size;

	i = 0;
	size = ft_strlen(s);
	while (start < size)
	{
		if (ft_compare(&s[start], c) == 0)
			break ;
		start++;
		i++;
	}
	return (i);
}

char	*ft_strcpy(char const *s, char c, int start)
{
	char	*rtrn_str;
	int		size;
	int		i;

	i = 0;
	size = ft_get_row_size(s, c, start) + start;
	rtrn_str = (char*)malloc(sizeof(char) * (size + 1));
	while (start < size)
	{
		rtrn_str[i] = s[start];
		start++;
		i++;
	}
	rtrn_str[i] = '\0';
	return (rtrn_str);
}

char	**ft_split(char const *s, char c)
{
	int		row;
	int		size;
	int		i;
	char	**rtrn_str;

	row = 0;
	i = 0;
	size = ft_strlen(str);
	if (rtrn_str = (char**)malloc(sizeof(char*) * (ft_strlen(str) + 1)) == NULL)
		return (NULL);
	while (i < size)
	{
		if (ft_compare(&str[i], c) == 0)
			i++;
		else
		{
			rtrn_str[row] = ft_strcpy(s, c, i);
			i = i + ft_get_row_size(s, c, i);
			row++;
		}
	}
	*(rtrn_str + row) = NULL;
	return (rtrn_str);
}
