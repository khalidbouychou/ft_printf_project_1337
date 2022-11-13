/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_lower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:29:32 by khbouych          #+#    #+#             */
/*   Updated: 2022/11/13 10:13:28 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned int num)
{
	int	get_len;

	get_len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		get_len++;
		num = num / 16;
	}
	return (get_len);
}

int	ft_print_hex_lower(unsigned int n)
{
	if (n < 16)
	{
		ft_putchar(LOW_HEX[n]);
	}
	else
	{
		ft_print_hex_lower(n / 16);
		ft_print_hex_lower(n % 16);
	}
	return (ft_len(n));
}
