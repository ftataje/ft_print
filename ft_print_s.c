/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:15:39 by ftataje-          #+#    #+#             */
/*   Updated: 2022/05/17 18:30:24 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!str)
		return (ft_print_s("(null)"));
	while (str[i])
	{
		len = len + ft_print_c(str[i]);
		i++;
	}
	return (len);
}
