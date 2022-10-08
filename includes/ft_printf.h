/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:30:17 by vquiroga          #+#    #+#             */
/*   Updated: 2022/10/08 20:35:58 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putstr(char *s);
int		ft_print_str(char *s);
int		ft_print_char(int c);
int		good_flag(char const chr, char *set);
int		ft_select_format(va_list args, const char flag);
int		t_printf(char const *str, ...);
int		ft_putnbr(int number, int counter);
int		ft_putnbr_pointer(unsigned long long nbr, int counter, char *base);
int		ft_putnbr_hexa(long nbr, int counter, char *base);
int		ft_putnbr_unsig(unsigned int number, int counter);

#endif