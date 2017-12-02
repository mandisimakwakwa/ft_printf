# include "ft_printf.h"

int     ft_skip(char *format, int i)
{
	while (!ft_isalpha(format[i]))
		i++;
	return i;
}

void	ft_fill(int fillCount, char c)
{
	int	i;

	i = 0;
	while (i <= fillCount)
	{
		ft_putchar(c);
		i++;
	}
}

void    ft_o_support(int o, int param, char flag, char f_addon)
{
	if (flag == '+' && param > 0)
		ft_fill(param - ft_nbrlen(o), ' ');
	if (flag == '0' && param > 0)
		ft_fill(param - ft_nbrlen(o), '0');
	if (flag == '#')
	{
		if (f_addon == '+' && param > 0)
			ft_fill(param - ft_nbrlen(o), ' ');
		ft_putchar('0');
	}
	ft_putoctal(o);
	if (flag == '#' && f_addon == '-')
		ft_fill(param - ft_nbrlen(o), ' ');
	if (flag == '-' && param > 0)
		ft_fill(param - ft_nbrlen(o), ' ');
}

void	ft_o_support_p2(char flag, char *format, char f_addon)
{
	char	*tmp;

	if (flag == '0')
	{
		tmp = ft_strsub(format, ft_chrpos(format, '0') + 1, ft_strlen(format));
		param = ft_getparam(tmp, flag) - 1;
	}
	if (flag == '-' && f_addon == '0')
	{
		if (ft_chrpos(format, '#') > 0)
		{
			ft_putchar('0');
			tmp = ft_strsub(format, ft_chrpos(format, '0') + 1, ft_strlen(format));
		}
		else
			tmp = ft_strsub(format, ft_chrpos(format, '+'), ft_strlen(format));
		param = ft_getparam(tmp, flag) - 1;
	}
	else if (flag == '#' && f_addon == '-')
		tmp = ft_strsub(format, ft_chrpos(format, '+') + 1, ft_strlen(format));
	else
		param = ft_getparam(format, flag) - 1;
	if (param > 0 && !flag)
		ft_fill(param - 1, ' ');
}

void    ft_c_support(char c, int param, char flag, char f_addon)
{
	if (param > 0 && !flag)
		ft_fill(param - 1, ' ');
	ft_putchar(c);
	if (f_addon == '-' && flag == '+')
		ft_fill(param - 1, ' ');
}
