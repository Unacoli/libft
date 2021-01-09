/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 12:16:20 by nargouse          #+#    #+#             */
/*   Updated: 2021/01/09 12:16:45 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	while (src[i])
		i++;
	if ((ptr = (char *)malloc(sizeof(char) * (i + 1))) == 0)
		return (NULL);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int		ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j] || (base[j] >= 9 && base[j] <= 13) ||
			base[j] == 32 || base[j] == '+' || base[j] == '-')
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	if (i <= 1)
		return (0);
	return (i);
}

char	*ft_itoa_base(int nb, char *base)
{
	int				index;
	unsigned int	nbr;
	char			num[67];

	nbr = nb;
	index = 65;
	num[66] = 0;
	num[65] = base[0];
	if (nb < 0)
		nbr = nb * -1;
	while (nbr > 0)
	{
		num[index--] = base[nbr % ft_check_base(base)];
		nbr /= ft_check_base(base);
	}
	if (nb < 0)
		num[index] = '-';
	else if (nb != 0)
		index++;
	return (ft_strdup(&num[index]));
}

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*num;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	num = ft_itoa_base(nb, base_to);
	return (num);
}
