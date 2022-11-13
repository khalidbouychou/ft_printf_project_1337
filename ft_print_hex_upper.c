/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:48:44 by khbouych          #+#    #+#             */
/*   Updated: 2022/11/13 10:13:32 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned int num)
{
	int	get_len;

	get_len = 0;
	if (num < 0)
		get_len++;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		get_len++;
		num = num / 16;
	}
	return (get_len);
}

int	ft_print_hex_upper(unsigned int n)
{
	if (n < 16)
	{
		ft_putchar(UP_HEX[n]);
	}
	else
	{
		ft_print_hex_upper(n / 16);
		ft_print_hex_upper(n % 16);
	}
	return (ft_len(n));
}
