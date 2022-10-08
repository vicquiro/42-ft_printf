/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:45:42 by vquiroga          #+#    #+#             */
/*   Updated: 2022/10/08 20:18:12 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../includes/libft_printf.h"

int	ft_putnbr_pointer(unsigned long long nbr, int counter, char *base)
{
	counter += ft_print_str("0x");
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		counter += ft_print_char('-');
	}
	if (nbr > 15)
		counter += ft_putnbr_pointer((nbr / 16), counter, base);
	counter += ft_print_char(base[nbr % 16]);
	return (counter);
}
