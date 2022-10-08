/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_misc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquiroga <vquiroga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:48:50 by vquiroga          #+#    #+#             */
/*   Updated: 2022/10/08 20:29:18 by vquiroga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../includes/ft_printf.h"

int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_print_char(s[i]);
		i++;
	}
}

int	ft_print_str(char *s)
{
	int	i;

	if (!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	else
	{
		i = 0;
		while (s[i])
		{
			ft_print_char(s[i]);
			i++;
		}
	}
	return (i);
}

int	good_flag(char const chr, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{	
		if (chr == set[i])
			return (-1);
		i++;
	}
	return (0);
}
