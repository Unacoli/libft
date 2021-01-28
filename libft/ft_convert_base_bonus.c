/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 12:16:20 by nargouse          #+#    #+#             */
/*   Updated: 2021/01/28 15:39:36 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

char	*ft_convert_base(const char *nbr, const char *base_from, const char *base_to)
{
	int		nb;
	char	*num;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	num = ft_itoa_base(nb, base_to);
	return (num);
}
