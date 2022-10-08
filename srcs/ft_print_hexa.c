/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:33:17 by vquiroga          #+#    #+#             */
/*   Updated: 2022/10/08 20:18:09 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../includes/libft_printf.h"

int	ft_putnbr_hexa(long nbr, int counter, char *base)
{
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		counter += ft_print_char('-');
	}
	if (nbr > 15)
		counter += ft_putnbr_hexa((nbr / 16), counter, base);
	counter += ft_print_char(base[nbr % 16]);
	return (counter);
}
