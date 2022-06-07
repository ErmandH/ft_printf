/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eharuni <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:08:29 by eharuni           #+#    #+#             */
/*   Updated: 2021/12/18 21:08:30 by eharuni          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

static	size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (s[c])
		c++;
	return (c);
}

void	ft_put_base(unsigned int n, const char *base, int is_hexa, int *count)
{
	size_t	format;

	format = ft_strlen(base);
	if (n == UINT_MAX && !is_hexa)
	{
		*count += ft_putchar_fd('4', 1);
		*count += ft_putchar_fd('2', 1);
		n = 94967295;
	}
	if (n < format)
	{
		if (is_hexa != 2)
			*count += ft_putchar_fd(base[n % format], 1);
		else
			*count += ft_putchar_fd(ft_toupper(base[n % format]), 1);
		return ;
	}
	else
		ft_put_base(n / format, base, is_hexa, count);
	*count += ft_putchar_fd(base[n % format], 1);
}
