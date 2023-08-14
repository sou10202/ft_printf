/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soichiro <soichiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:16:40 by soichiro          #+#    #+#             */
/*   Updated: 2023/08/14 19:49:54 by soichiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

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
