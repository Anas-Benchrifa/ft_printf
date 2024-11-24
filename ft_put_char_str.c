/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_char_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:37:39 by mac               #+#    #+#             */
/*   Updated: 2024/11/24 18:56:17 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	lenght;

	lenght = 0;
	if (!s)
	{
		lenght += ft_putstr("(null)");
		return (lenght);
	}
	while (s[lenght])
	{
		write(1, &s[lenght], 1);
		lenght++;
	}
	return (lenght);
}
