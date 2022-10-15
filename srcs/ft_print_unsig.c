/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsig.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:48:05 by vquiroga          #+#    #+#             */
/*   Updated: 2022/10/15 15:23:41 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../includes/ft_printf.h"

int	ft_putnbr_unsig(unsigned int number, int counter)
{
	unsigned int	nbr;

	nbr = number;
	if (nbr >= 10)
	{
		counter += ft_putnbr((nbr / 10), 0);
		counter += ft_print_char((nbr % 10) + '0');
	}
	else
		counter += ft_print_char(nbr + '0');
	return (counter);
}
