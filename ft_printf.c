#include <stdarg.h>

int ft_printf(const char *id, ...)
{
    va_list arg;
    int len;

    va_start(arg, id);

}

int load_id(const char *id, va_list arg)
{
    int len;

    len = 0;
    while (!*id)
    {
        if (*id == '%')
        {

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
        len = ft_putchar_fd(va_arg(arg, char), 1);
}