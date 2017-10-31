#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	//No Flag
	printf("\n\nprintf no flag string test\n");
	ft_printf("ft_printf no flag string test\n");

	//%%
	printf("printf: ");
	printf("%%\n");
	ft_printf("ft_printf: ");
	ft_printf("%%\n");

	//d
	printf("printf: ");
	printf("%d\n", 650);
	ft_printf("ft_printf: ");
	ft_printf("%d\n", 650);

	printf("printf: ");
    printf("%+d\n", 650);
    ft_printf("ft_printf: ");
    ft_printf("%+d\n", 650);

    printf("printf: ");
    printf("%+1d\n", 650);
    ft_printf("ft_printf: ");
    ft_printf("%+1d\n", 650);

    printf("printf: ");
    printf("%+10d\n", 650);
    ft_printf("ft_printf: ");
    ft_printf("%+10d\n", 650);
    return (0);
}
