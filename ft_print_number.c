/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:06:29 by khbouych          #+#    #+#             */
/*   Updated: 2022/11/13 10:24:49 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int n)
{
	long long	nbr;
	int			get_len;

	get_len = 0;
	nbr = n;
	if (nbr < 0)
	{
		nbr *= -1;
		get_len += ft_putchar('-');
	}
	if (nbr >= 10)
	{
		get_len += ft_print_number(nbr / 10);
	}
	get_len += ft_putchar((nbr % 10) + '0');
	return (get_len);
}
