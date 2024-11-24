/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:38:04 by mac               #+#    #+#             */
/*   Updated: 2024/11/24 22:20:12 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_put_add(unsigned long int nbr);
int	ft_put_u_nbr(unsigned int nbr);
int	ft_put_hex(int nbr, char x_X);
int	ft_put_nbr(int nbr);
int	ft_putchar(char c);
int	ft_putstr(char *s);

#endif