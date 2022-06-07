/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eharuni <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:13:36 by eharuni           #+#    #+#             */
/*   Updated: 2022/01/08 12:15:32 by eharuni          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define UINT_MAX 4294967295
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_put_base(unsigned int n, const char *base, int is_hexa, int *count);
void	ft_put_pointer(unsigned long long n, int *count);
int		ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd, int *count);
int		ft_putstr_fd(char *s, int fd);

#endif
