/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:04:27 by mac               #+#    #+#             */
/*   Updated: 2024/11/24 22:12:57 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	test(va_list ptr, char c)
{
	int	lenght;

	lenght = 0;
	if (c == 'u')
		lenght += ft_put_u_nbr(va_arg(ptr, unsigned int));
	else if (c == 'p')
	{
		lenght += ft_putstr("0x");
		lenght += ft_put_add(va_arg(ptr, unsigned long));
	}
	else if (c == 'x' || c == 'X')
		lenght += ft_put_hex(va_arg(ptr, int), c);
	else if (c == 's')
		lenght += ft_putstr(va_arg(ptr, char *));
	else if (c == 'd' || c == 'i')
		lenght += ft_put_nbr(va_arg(ptr, int));
	else if (c == 'c')
		lenght = ft_putchar(va_arg(ptr, int));
	else if (c == '%')
		lenght += ft_putchar(c);
	else
		lenght += ft_putchar(c);
	return (lenght);
}

int	ft_printf(const char *format, ...)
{
	int		lenght;
	va_list	_format;

	lenght = 0;
	va_start(_format, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			lenght += test(_format, *format);
		}
		else
			lenght += ft_putchar(*format);
		format++;
	}
	va_end(_format);
	return (lenght);
}
