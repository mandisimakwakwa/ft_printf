#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	//No Flag
	printf("\nprintf no flag string test\n");
	ft_printf("ft_printf no flag string test\n");

	//%%
	printf("printf\t\t: ");
	printf("%%\n");
	ft_printf("ft_printf\t: ");
	ft_printf("%%\n");

	//d
	printf("printf\t\t: ");
	printf("%d\n", 650);
	ft_printf("ft_printf\t: ");
	ft_printf("%d\n", 650);

	printf("printf\t\t: ");
    printf("%+d\n", 650);
    ft_printf("ft_printf\t: ");
    ft_printf("%+d\n", 650);

    printf("printf\t\t: ");
    printf("%+1d\n", 650);
    ft_printf("ft_printf\t: ");
    ft_printf("%+1d\n", 650);

    printf("printf\t\t: ");
    printf("%+10d\n", 650);
    ft_printf("ft_printf\t: ");
    ft_printf("%+10d\n", 650);
    return (0);
}
