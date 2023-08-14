#include <stdarg.h>

int ft_printf(const char *id, ...)
{
    va_list arg;
    int len;

    va_start(arg, id);

    return (len);
}

int load_id(const char *id, va_list arg)
{
    int len;

    len = 0;
    while (!*id)
    {
        if (*id == '%')
        {
            treat_id(*id++, arg);
        }
        else
        {
            ft_putchar_fd(*id, 1);
            len++;
        }
        id++;
    }
}

int treat_id(const char id, va_list arg)
{
    int len;

    if (id == 'c')
        len = ft_putchar(va_arg(arg, char));
    else if (id == 'd' || id == 'i')
        len = ft_putnbr(va_arg(arg, int));
    else if (id == 's')
        len = ft_putstr(va_arg(arg, char*));
    else if (id == 'u')
        len = ft_putunbr(va_arg(arg, int));
    else if (id == 'x')
        len =
}