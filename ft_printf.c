/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 00:35:31 by mac               #+#    #+#             */
/*   Updated: 2024/11/27 22:33:54 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	conversion_characters(va_list arg_ptr, char format, int *len)
{
	if (format == '%')
		ft_putchar(format, len);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(arg_ptr, int), len);
	else if (format == 's')
		ft_putstr(va_arg(arg_ptr, char *), len);
	else if (format == 'p')
		ft_put_addr(va_arg(arg_ptr, void *), len);
	else if (format == 'c')
		ft_putchar((char)va_arg(arg_ptr, int), len);
	else if (format == 'u')
		ft_put_u_nbr(va_arg(arg_ptr, unsigned int), len);
	else if (format == 'x')
		ft_put_nbr_base(va_arg(arg_ptr, int), format, len);
	else if (format == 'X')
		ft_put_nbr_base(va_arg(arg_ptr, int), format, len);
	else
		ft_putchar(format, len);
}

int	ft_printf(const char *format, ...)
{
	va_list	_ptr_96;
	int		lenght;

	if (write(1, 0, 0) == -1)
		return (-1);
	lenght = 0;
	va_start(_ptr_96, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			conversion_characters(_ptr_96, *format, &lenght);
		}
		else
			ft_putchar(*format, &lenght);
		format++;
	}
	va_end(_ptr_96);
	return (lenght);
}
