/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 13:18:41 by nargouse          #+#    #+#             */
/*   Updated: 2021/01/07 16:48:55 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_compare(char *str, char *charset)
{
	int i;
	int charset_size;

	i = 0;
	charset_size = ft_strlen(charset);
	while (i < charset_size)
	{
		if (*(str) == *(charset + i))
			return (0);
		i++;
	}
	return (1);
}

int		ft_get_row_size(char *str, char *charset, int start)
{
	int i;
	int size;

	i = 0;
	size = ft_strlen(str);
	while (start < size)
	{
		if (ft_compare(&str[start], charset) == 0)
			break ;
		start++;
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *str, char *charset, int start)
{
	char	*rtrn_str;
	int		size;
	int		i;

	i = 0;
	size = ft_get_row_size(str, charset, start) + start;
	rtrn_str = (char*)malloc(sizeof(char) * (size + 1));
	while (start < size)
	{
		rtrn_str[i] = str[start];
		start++;
		i++;
	}
	rtrn_str[i] = '\0';
	return (rtrn_str);
}

char	**ft_split(char *str, char *charset)
{
	int		row;
	int		size;
	int		i;
	char	**rtrn_str;

	row = 0;
	i = 0;
	size = ft_strlen(str);
	rtrn_str = (char**)malloc(sizeof(char*) * (ft_strlen(str) + 1));
	while (i < size)
	{
		if (ft_compare(&str[i], charset) == 0)
			i++;
		else
		{
			rtrn_str[row] = ft_strcpy(str, charset, i);
			i = i + ft_get_row_size(str, charset, i);
			row++;
		}
	}
	*(rtrn_str + row) = NULL;
	return (rtrn_str);
}
