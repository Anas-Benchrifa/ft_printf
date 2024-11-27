/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_addr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:39:36 by mac               #+#    #+#             */
/*   Updated: 2024/11/27 22:23:29 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_addr_hex(unsigned long int nbr, char format, int *len)
{
	unsigned long int	b_16;
	char				*base;

	b_16 = 16;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr < b_16)
		ft_putchar(base[nbr % b_16], len);
	else
	{
		ft_put_addr_hex(nbr / b_16, format, len);
		ft_put_addr_hex(nbr % b_16, format, len);
	}
}

void	ft_put_addr(void *addr, int *len)
{
	unsigned long int	_ptr;

	_ptr = (unsigned long int )addr;
	ft_putstr("0x", len);
	ft_put_addr_hex(_ptr, 'x', len);
}
