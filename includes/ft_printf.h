/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:30:17 by vquiroga          #+#    #+#             */
/*   Updated: 2022/10/15 15:06:33 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

void	ft_putstr(char *s);
int		ft_print_str(char *s);
int		ft_print_char(int c);
int		ft_select_format(va_list args, const char flag);
int		ft_printf(char const *str, ...);
int		ft_putnbr(int number, int counter);
int		ft_putnbr_pointer(size_t nbr, int counter, char *base);
int		ft_putnbr_hexa(unsigned int nbr, int counter, char *base);
int		ft_putnbr_unsig(unsigned int number, int counter);

#endif