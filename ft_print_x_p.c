/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:19:05 by ftataje-          #+#    #+#             */
/*   Updated: 2022/05/17 18:19:19 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x_p(unsigned long int num, const char format)
{
	int	len;

	len = 0;
	if (format == 'x' || format == 'p')
	{
		if (num >= 16)
			len += ft_print_x_p(num / 16, format);
		len += ft_print_c("0123456789abcdef" [num % 16]);
	}
	else if (format == 'X')
	{
		if (num >= 16)
			len += ft_print_x_p(num / 16, format);
		len += ft_print_c("0123456789ABCDEF" [num % 16]);
	}
	return (len);
}
