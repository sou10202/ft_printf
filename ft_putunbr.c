/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:16:40 by soichiro          #+#    #+#             */
/*   Updated: 2023/08/17 19:06:35 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putunbr(int nbr)
{
    int     len;
    long    unbr;
    long     min;

    min = 2147483648;
    if (nbr >= 0)
        len = ft_putnbr(nbr);
    else
    {
        unbr = nbr + min + INT_MAX + 1;
        len = ft_putnbr(unbr);
    }
    return (len);
}
