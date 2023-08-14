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
    char    *c = "abcde";

    n = write(1, c, ft_strlen(c));
    write(1, "\n", 1);
    printf("%d", n);
    return (0);
}
