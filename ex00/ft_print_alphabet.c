#include <unistd.h>
/*void ft_print_alphabet(void)
{
   char c;
    c = 'a';
    while (c <= 'z')
    {
        write(1, &c, 1);
        c++;
    }
}*/

// code 2
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_print_alphabet(void)
{
   int i;
    i = 97;
    while (i <= 122)
    {
       ft_putchar(i);
        i++;
    }
}


int main(void)
{
    ft_print_alphabet();
    

    return 0;
}

