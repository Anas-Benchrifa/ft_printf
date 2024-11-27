/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-chr <aben-chr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 22:57:45 by mac               #+#    #+#             */
/*   Updated: 2024/11/27 22:35:03 by aben-chr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_put_nbr_base(unsigned int nbr, char format, int *len);
void	ft_put_u_nbr(unsigned int nbr, int *len);
int		ft_printf(const char *format, ...);
void	ft_put_addr(void *addr, int *len);
void	ft_putnbr(int nbr, int *len);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *s, int *len);

#endif
