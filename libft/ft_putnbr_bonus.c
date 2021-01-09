/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 12:06:56 by nargouse          #+#    #+#             */
/*   Updated: 2021/01/09 12:07:34 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_putnbr(int nbr, int l_base, char *base)
{
	unsigned int nb;
	unsigned int base_l;

	if (nbr < -1)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	nb = nbr;
	base_l = l_base;
	if (nb > base_l - 1)
	{
		ft_putnbr(nb / base_l, l_base, base);
		ft_putnbr(nb % base_l, l_base, base);
	}
	else
		ft_putchar(base[nb % base_l]);
}
