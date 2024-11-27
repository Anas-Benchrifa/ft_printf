/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 22:57:45 by mac               #+#    #+#             */
/*   Updated: 2024/11/27 16:31:56 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_put_nbr_base(unsigned int nbr, char format, int *len);
void	ft_put_u_nbr(unsigned int nbr, int *len);
void	ft_put_addr(void *addr, int *len);
void	ft_putnbr(int nbr, int *len);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *s, int *len);

#endif