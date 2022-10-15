/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:45:42 by vquiroga          #+#    #+#             */
/*   Updated: 2022/10/15 15:33:11 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../includes/ft_printf.h"

int	ft_put_pointer(size_t nbr, int counter, char *base)
{
	if (nbr > 15)
		counter += ft_put_pointer((nbr / 16), 0, base);
	counter += ft_print_char(base[nbr % 16]);
	return (counter);
}
