#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

/*int main()
{
    ft_putchar('b');
    ft_putchar('r');
    ft_putchar('e');
    ft_putchar('l');
    ft_putchar('\n');
    ft_putchar(65);
    return 0;
}*/