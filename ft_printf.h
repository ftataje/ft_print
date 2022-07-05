/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:48:17 by ftataje-          #+#    #+#             */
/*   Updated: 2022/05/17 18:16:22 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int		ft_printf(char const *str, ...);
int		ft_swap(va_list agrs, const char format);
int		ft_print_c(char c);
int		ft_print_s(char *str);
int		ft_print_d_i(int n);
int		ft_print_u(unsigned int n);
int		ft_print_x_p(unsigned long int num, const char format);

#endif
