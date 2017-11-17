# include "ft_printf.h"

int     ft_getParam(char *format, char flag)
{
    char    *temp;
    int     ret;
    int     i;
    int     j;

    temp = ft_memalloc(ft_strlen(format));
    i = 0;
    if (flag == 'b')
        while (!ft_isdigit(format[i]))
            i++;
    else if(ft_isdigit(format[ft_chrpos(format, '%') + 1]))
        i++;
    else
        i = ft_chrpos(format, flag) + 1;
    j = 0;
    while (ft_isdigit(format[i]))
    {
        temp[j] = format[i];
        i++;
        j++;
    }
    temp[j] = '\0';
    ret = ft_atoi(temp);
    free(temp);
    return ret;
}