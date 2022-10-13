/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:45:42 by vquiroga          #+#    #+#             */
/*   Updated: 2022/10/13 17:00:26 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../includes/ft_printf.h"

int	ft_putnbr_pointer(size_t nbr, int counter, char *base)
{
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		counter += ft_print_char('-');
	}
	if (nbr > 15)
		counter += ft_putnbr_pointer((nbr / 16), 0, base);
	counter += ft_print_char(base[nbr % 16]);
	return (counter);
}
