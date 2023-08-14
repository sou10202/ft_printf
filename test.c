#include <stdio.h>
#include <unistd.h>

size_t	ft_strlen(const char *str)
{
	if (*str == '\0')
		return (0);
	return (ft_strlen(str + 1) + 1);
}


int main(void)
{
    int n;
    unsigned int u;
    char    *c = "abcde";

    n = -100;
    printf("%u\n", n);
    return (0);
}
