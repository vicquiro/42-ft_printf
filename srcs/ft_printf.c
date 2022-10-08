/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:47:58 by vquiroga          #+#    #+#             */
/*   Updated: 2022/10/08 20:17:47 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../includes/libft_printf.h"

int	ft_select_format(va_list args, const char flag)
{
	if (flag == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (flag == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (flag == 'd')
		return (ft_putnbr(va_arg(args, int), 0));
	else if (flag == 'i')
		return (ft_putnbr(va_arg(args, int), 0));
	else if (flag == 'x')
		return (ft_putnbr_hexa(va_arg(args, long), \
		0, "0123456789abcdef"));
	else if (flag == 'X')
		return (ft_putnbr_hexa(va_arg(args, long), \
		0, "0123456789ABCDEF"));
	else if (flag == 'p')
		return (ft_putnbr_pointer(va_arg(args, unsigned long long), \
		0,  "0123456789ABCDEF"));
	else if (flag == 'u')
		return (ft_putnbr_unsig(va_arg(args, unsigned int), 0));
	else if (flag == '%')
		return (ft_print_char('%'));
	return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		print_length;

	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && good_flag(str[i + 1], "csdi%xXpu") == -1)
		{
			va_end(args);
			return (print_length);
		}
		else if (str[i] == '%')
		{
			print_length += ft_select_format(args, str[i + 1]);
			i++;
		}
		else
			print_length += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}
