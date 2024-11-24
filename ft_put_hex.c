/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 18:41:40 by mac               #+#    #+#             */
/*   Updated: 2024/11/24 18:56:00 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(int nbr, char x_X)
{
	int		lenght;
	char	*base;

	lenght = 0;
	if (x_X == 'x')
		base = "0123456789abcdef";
	if (x_X == 'X')
		base = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		lenght += ft_put_hex(nbr / 16, x_X);
		lenght += ft_put_hex(nbr % 16, x_X);
	}
	else
		lenght += ft_putchar(base[nbr]);
	return (lenght);
}

int	ft_put_add(unsigned long int nbr)
{
	int		lenght;
	char	*base;

	lenght = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		lenght += ft_put_add(nbr / 16);
		lenght += ft_put_add(nbr % 16);
	}
	else
		lenght += ft_putchar(base[nbr]);
	return (lenght);
}
