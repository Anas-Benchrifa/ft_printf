/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 00:35:53 by mac               #+#    #+#             */
/*   Updated: 2024/11/27 16:27:56 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *len)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-', len);
		nbr *= -1;
	}
	if (nbr < 10)
		ft_putchar(nbr + '0', len);
	else
	{
		ft_putnbr(nbr / 10, len);
		ft_putnbr(nbr % 10, len);
	}
}

void	ft_put_nbr_base(unsigned int nbr, char format, int *len)
{
	char			*base;
	unsigned int	b_16;

	b_16 = 16;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr < b_16)
		ft_putchar(base[nbr % b_16], len);
	else
	{
		ft_put_nbr_base(nbr / b_16, format, len);
		ft_put_nbr_base(nbr % b_16, format, len);
	}
}

void	ft_put_u_nbr(unsigned int nbr, int *len)
{
	if (nbr < 10)
		ft_putchar(nbr + '0', len);
	else
	{
		ft_put_u_nbr(nbr / 10, len);
		ft_put_u_nbr(nbr % 10, len);
	}
}
