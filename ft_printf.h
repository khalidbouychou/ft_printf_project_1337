/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:50:47 by khbouych          #+#    #+#             */
/*   Updated: 2022/11/13 10:24:52 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define LOW_HEX "0123456789abcdef"
# define UP_HEX "0123456789ABCDEF"

int	ft_print_str(const char *str);
int	ft_putchar(char c);
int	ft_print_number(int n);
int	ft_print_hex_upper(unsigned int n);
int	ft_print_hex_lower(unsigned int n);
int	ft_print_adr_memory(unsigned long long ptr);
int	ft_print_unsigned_format(unsigned int nbr);
int	ft_printf(const char *format, ...);

#endif
