/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eharuni <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:11:42 by eharuni           #+#    #+#             */
/*   Updated: 2022/01/28 15:51:54 by eharuni          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_pointer(unsigned long long n, int *count)
{
	const char	*base;

	base = "0123456789abcdef";
	if (n < 16)
	{
		*count += ft_putchar_fd(base[n % 16], 1);
		return ;
	}
	else
		ft_put_pointer(n / 16, count);
	*count += ft_putchar_fd(base[n % 16], 1);
}
