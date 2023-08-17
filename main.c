#include "ft_printf.h"

int	main(void)
{
	char	*p = NULL;
	int len1 = printf("本家:%d%%\n", 10);
	int len2 = ft_printf("自作:%d%%\n", 10);

	printf("本家:%d\n自作:%d", len1, len2);
	return (0);
}