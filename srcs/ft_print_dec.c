/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:47:26 by vquiroga          #+#    #+#             */
/*   Updated: 2022/10/08 20:29:06 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../includes/ft_printf.h"

int	ft_putnbr(int number, int counter)
{
	int	nbr;

	nbr = number;
	if (nbr < 0)
	{
		counter += ft_print_char('-');
		if (nbr == -2147483648)
		{
			counter += ft_print_char('2');
			nbr = 147483648;
		}
		else
			nbr = (nbr * -1);
	}
	if (nbr >= 10)
	{
		counter += ft_putnbr((nbr / 10), counter);
		counter += ft_print_char((nbr % 10) + '0');
	}
	else
		counter += ft_print_char(nbr + '0');
	return (counter);
}
