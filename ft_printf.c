/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:38:10 by soyamaza          #+#    #+#             */
/*   Updated: 2023/08/17 19:06:10 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *id, ...)
{
    va_list arg;
    int len;

    va_start(arg, id);
    len = load_id(id, arg);
    va_end(arg);
    return (len);
}

int load_id(const char *id, va_list arg)
{
    int len;

    len = 0;
    while (*id)
    {
        if (*id == '%')
        {
            id++;
            len += treat_id(*id, arg);
        }
        else
        {
            ft_putchar_fd(*id, 1);
            len++;
        }
        id++;
    }
    return (len);
}

int treat_id(const char id, va_list arg)
{
    int len;

    len = 0;
    if (id == 'c')
        len = ft_putchar(va_arg(arg, int));
    else if (id == 'd' || id == 'i')
        len = ft_putnbr(va_arg(arg, int));
    else if (id == 's')
        len = ft_putstr(va_arg(arg, char*));
    else if (id == 'u')
        len = ft_putunbr(va_arg(arg, int));
    else if (id == 'x')
        len = ft_putxnbr(va_arg(arg, unsigned long), 1);
    else if (id == 'X')
        len = ft_putxnbr(va_arg(arg, unsigned long), 0);
    else if (id == 'p')
        len = ft_putpointer(va_arg(arg, unsigned long)) + 2;
    else if (id == '%')
        len = ft_putpercent();
    return (len);
}