/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:33:17 by vquiroga          #+#    #+#             */
/*   Updated: 2022/10/15 15:07:07 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../includes/ft_printf.h"

int	ft_putnbr_hexa(unsigned int nbr, int counter, char *base)
{
	unsigned long long	k;

	k = (unsigned long long) nbr;
	if (k > 15)
		counter += ft_putnbr_hexa((k / 16), 0, base);
	counter += ft_print_char(base[k % 16]);
	return (counter);
}
