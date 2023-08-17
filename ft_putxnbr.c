/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putxnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:38:00 by soyamaza          #+#    #+#             */
/*   Updated: 2023/08/17 19:06:38 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putxnbr(unsigned long n, int flag)
{
	char	c;
	int		len;
	const char 	lower_base[] = "0123456789abcdef";
	const char	upper_base[] = "0123456789ABCDEF";

	len = 0;
	if (flag == 1)
		c = lower_base[n % 16];
	else
		c = upper_base[n % 16];
	if (n < 16)
		write(1, &c, 1);
	else
	{
		len += ft_putxnbr(n / 16, flag);
		write(1, &c, 1);
	}
	return (1 + len);
}