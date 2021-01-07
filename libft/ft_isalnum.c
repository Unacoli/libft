/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nargouse <nargouse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 13:27:49 by nargouse          #+#    #+#             */
/*   Updated: 2021/01/07 13:30:29 by nargouse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c);

int	ft_isdigit(char c);

int	ft_isalnum(char c)
{
	return (ft_isalpha(c) == 1 || ft_isdigit(c) == 1);
}
