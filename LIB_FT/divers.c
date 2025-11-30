#include "libft.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

void	testcalloc(void)
{
	size_t	count = (SIZE_MAX / 2) + 1;
	size_t	size = 2;
	void	*normal;
	void	*ftone;

	printf("\n\nTEST 1 = size nulle\n\n");

	normal = calloc(42, 0);
	printf("%p\n", normal);
	ftone = ft_calloc(42, 0);
	printf("%p\n", ftone);

	printf("\n\nTEST 2 = count nul\n\n");

	normal = calloc(0, 42);
	printf("%p\n", normal);
	ftone = ft_calloc(0, 42);
	printf("%p\n", ftone);

	printf("\n\nTEST 3 = overflow\n\n");

	normal = calloc(size, count);
	printf("%p\n", normal);
	ftone = ft_calloc(size, count);
	printf("%p\n", ftone);
}

void	testitoa(void)
{
	printf("\n\n TEST de la valeur 0\n\n");
	printf("\t%s\n", ft_itoa(0));

	printf("\n\n TEST de la valeur min\n\n");
	printf("\t%s\n", ft_itoa(-2147483648));

	printf("\n\n TEST de la valeur max\n\n");
	printf("\t%s\n", ft_itoa(2147483647));

	// printf("\n\n TEST de la valeur min -1\n\n");
	// printf("\t%s\n", ft_itoa(-2147483649));

	// printf("\n\n TEST de la valeur max + 1\n\n");
	// printf("\t%s\n", ft_itoa(2147483647));
}

int	main(void)
{
	// testcalloc();
	// testitoa();
	
	return (0);
}
