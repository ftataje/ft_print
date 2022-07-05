/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:37:07 by ftataje-          #+#    #+#             */
/*   Updated: 2022/05/17 18:35:03 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
	{
		len += ft_print_u(n / 10);
		printf("paso por mayor a 10\n");
	}
	n = n % 10;
	if (n < 10)
		len += ft_print_c(n + 48);
	return (len);
}

/*2^32 - 121 = 4294967175*/