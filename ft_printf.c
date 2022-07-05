/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:56:07 by ftataje-          #+#    #+#             */
/*   Updated: 2022/05/17 18:28:45 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_swap(va_list args, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = len + ft_print_c(va_arg(args, int));
	else if (format == 's')
		len = len + ft_print_s(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		len = len + ft_print_d_i(va_arg(args, int));
	else if (format == 'u')
		len = len + ft_print_u(va_arg(args, unsigned int));
	else if (format == '%')
		len = len + ft_print_c('%');
	else if (format == 'p')
	{
		len += ft_print_s("0x") + \
		ft_print_x_p(va_arg(args, unsigned long int), format);
	}
	else if (format == 'x' || format == 'X')
		len += ft_print_x_p(va_arg(args, unsigned int), format);
	return (len);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	len = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len = len + ft_swap(args, str[i + 1]);
			i += 2;
		}
		else
		{
			len += ft_print_c(str[i]);
			i++;
		}
	}
	va_end(args);
	return (len);
}

/*int	main(void)
{
	int		res1 = 0;
	int		res2 = 0;
	int		a;

	a = 5;*/
	/*res1 = printf("normal c: %c\n", 122);
	res2 = ft_printf("mio c: %c\n", 122);
	printf("normal c: %d, mio c: %d", res1, res2);*/

	/*res1 = printf("normal s: %s\n", NULL);
	res2 = ft_printf("mio s: %s\n", NULL);
	printf("normal c: %d, mio c: %d", res1, res2);*/

	/*res1 = printf("normal d/i: %d\n", -1);
	res2 = ft_printf("mio d/i: %d\n", -1);
	printf("normal c: %d, mio c: %d\n", res1, res2);*/

	/*res1 = printf("normal u: %u\n", -2);
	res2 = ft_printf("mio u: %u\n", -2);
	printf("normal c: %d, mio c: %d\n", res1, res2);*/

	/*res1 = printf("normal p/x/X: %p\n", 11);
	res2 = ft_printf("mio p/x/X: %p\n", 11);
	printf("normal c: %d, mio c: %d\n", res1, res2);*/

	/*printf("memory address = %d\n", a);
	printf("memory address = %u\n", a);
	printf("memory address = %p\n", a);

	return (0);
}*/
