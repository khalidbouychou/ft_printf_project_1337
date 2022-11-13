/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:48:48 by khbouych          #+#    #+#             */
/*   Updated: 2022/11/13 11:59:59 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_format(va_list args, const char *format)
{
	int	len;

	len = 0;
	if (*format == '%')
		len += ft_putchar('%');
	else if (*format == 'd' || *format == 'i')
		len += ft_print_number(va_arg(args, int));
	else if (*format == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (*format == 's')
		len += ft_print_str(va_arg(args, const char *));
	else if (*format == 'X')
		len += ft_print_hex_upper(va_arg(args, unsigned int));
	else if (*format == 'x')
		len += ft_print_hex_lower(va_arg(args, unsigned int));
	else if (*format == 'p')
		len += ft_print_adr_memory(va_arg(args, unsigned long long));
	else if (*format == 'u')
		len += ft_print_unsigned_format(va_arg(args, unsigned int));
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		get_len;

	get_len = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			get_len += ft_check_format(args, format);
		}
		else
			get_len += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (get_len);
}
