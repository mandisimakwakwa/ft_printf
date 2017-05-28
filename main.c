#include "ft_printf.h"
#include <stdio.h>

int		main(void)
{
	//No Flag
	printf("Printf no flag string test\n");
	ft_printf("ft_printf no flag string test\n\n");

	//%%
	printf("printf: ");
	printf("%%\n");
	ft_printf("ft_printf: ");
	ft_printf("%%\n");
	ft_printf("\n");

	//s
	printf("printf: ");
	printf("%s\n", "This is lowercase s test for printf");
	ft_printf("ft_printf: ");
	ft_printf("%s\n\n", "This is lowercase s test for ft_printf");

	//S
	printf("printf: ");
	printf("%S\n", "This is the uppercase S test for printf");
	ft_printf("ft_printf: ");
	ft_printf("%S\n\n", "This is the uppercase S test for printf");

	//p
	char *p;

	p = 5;
	printf("printf: ");
	printf("%p\n", p);
	ft_printf("ft_printf: ");
	ft_printf("%p\n\n", p);
	return (0);
}
