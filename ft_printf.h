/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:08:06 by soyamaza          #+#    #+#             */
/*   Updated: 2023/08/17 18:46:02 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARY_H

# define LIBRARY_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "../libft/libft.h"

typedef	struct s_keep
{
	char	id;
	int		len;
}				t_keep;

int	ft_putchar(char c);
int	ft_putnbr(long n);
int	ft_putstr(char *s);
int ft_putunbr(int nbr);
int	ft_putxnbr(unsigned long n, int flag);
int ft_printf(const char *id, ...);
int load_id(const char *id, va_list arg);
int	ft_putpointer(unsigned long n);
int	ft_putpercent(void);
int treat_id(const char id, va_list arg);



#endif // LIBRARY_H