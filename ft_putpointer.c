/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:24:07 by soyamaza          #+#    #+#             */
/*   Updated: 2023/08/17 19:06:27 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long n)
{
	char	c;
	int		len;
	const char 	lower_base[] = "0123456789abcdef";

	len = 0;
	c = lower_base[n % 16];
	if (n < 16)
	{
		write(1, "0x", 2);
		write(1, &c, 1);
	}
	else
	{
		len += ft_putpointer(n / 16);
		write(1, &c, 1);
	}
	return (1 + len);
}

// int main(void)
// {
// 	int p = 100;
	
// 	ft_putpointer(p);
// }