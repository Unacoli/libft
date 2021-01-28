/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 12:17:21 by nargouse          #+#    #+#             */
/*   Updated: 2021/01/28 15:35:20 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

int		ft_atoi_base(char *str, char *base)
{
	int		index;
	int		sign;
	int		num;

	sign = 1;
	index = 0;
	num = 0;
	while (is_space(str[index]))
		index++;
	while (str[index] == '-' || str[index] == '+')
		if (str[index++] == '-')
			sign *= -1;
	while (is_in_base(str[index], base) >= 0)
	{
		num *= ft_check_base(base);
		num += sign * is_in_base(str[index], base);
		index++;
	}
	return (num);
}
