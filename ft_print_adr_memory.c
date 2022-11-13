/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adr_memory.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:48:59 by khbouych          #+#    #+#             */
/*   Updated: 2022/11/13 10:13:23 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned long long num)
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

static void	ft_put_ptr(unsigned long long num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
		ft_putchar(LOW_HEX[num]);
}

int	ft_print_adr_memory(unsigned long long ptr)
{
	int	get_len;

	get_len = 0;
	get_len += ft_print_str("0x");
	if (ptr == 0)
		get_len += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		get_len += ft_len(ptr);
	}
	return (get_len);
}
