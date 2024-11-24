/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:52:02 by mac               #+#    #+#             */
/*   Updated: 2024/11/24 18:07:39 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_nbr(int nbr)
{
	int	lenght;

	lenght = 0;
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (nbr < 0)
	{
		lenght = write(1, "-", 1);
		nbr = -nbr;
		ft_put_nbr(nbr);
	}
	else if (nbr > 9)
	{
		lenght += ft_put_nbr(nbr / 10);
		lenght += ft_put_nbr(nbr % 10);
	}
	else
		lenght += ft_putchar(nbr + '0');
	return (lenght);
}

int	ft_put_u_nbr(unsigned int nbr)
{
	int	lenght;

	lenght = 0;
	if (nbr < 10)
		lenght += ft_putchar(nbr + '0');
	else if (nbr > 9)
	{
		lenght += ft_put_u_nbr(nbr / 10);
		lenght += ft_put_u_nbr(nbr % 10);
	}
	return (lenght);
}
