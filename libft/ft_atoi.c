/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 13:17:41 by nargouse          #+#    #+#             */
/*   Updated: 2021/01/15 17:34:57 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	s;
	int i;

	n = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\f')
		i++;
	s = 1;
	if (str[i] == '-')
		s = -s;
	while (str[i] <= '9' && str[i] >= '0')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * s);
}
