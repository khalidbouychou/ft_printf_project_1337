/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_format.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:05:40 by khbouych          #+#    #+#             */
/*   Updated: 2022/11/13 10:13:39 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_format(unsigned int nbr)
{
	int	get_len;

	get_len = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		get_len += ft_putchar('-');
	}
	if (nbr >= 10)
	{
		get_len += ft_print_unsigned_format(nbr / 10);
	}
	get_len += ft_putchar((nbr % 10) + '0');
	return (get_len);
}
