# include "ft_printf.h"

static void ft_process(char *format, va_list ap)
{
    char    flag;
    int     i;

    i = 0;
    while(format[i])
    {
        if (format[i] == '%')
        {
            i++;
            flag = ft_getFlag(format[i]);
            i = ft_output(format, flag, ap, i);
        } else if (format[i] != '\0')
            ft_putchar(format[i]);
        i++;
    }
}

static void ft_input(char *format, va_list ap)
{
    int ret;

    ret = ft_checkMod(format);
    if (ret == 1)
        ft_process(format, ap);
    else if (ret == 2)
        ft_mod(format);
    else
        if(ret<0)
            ft_putstr(format);
}

int  ft_output(char *format, char flag, va_list ap, int i)
{
    i = ft_skip(format, i);
    ft_specifTypeIni(format, format[i], flag, ap);
    return i;
}

int         ft_printf(const char *format, ...)
{
    va_list     ap;

    va_start(ap, format);
    ft_input((char *)format, ap);
    va_end(ap);
    return 0;
}