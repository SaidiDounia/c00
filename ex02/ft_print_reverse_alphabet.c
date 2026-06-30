#include <unistd.h>
/*void ft_print_reverse_alphabet(void)
{
    char c;
    c = 'z';
    while (c >= 'a')
    {
        write(1 ,&c, 1);
        c--;
    }
}*/

void ft_print_reverse_alphabet(void)
{
    int i;
    i = 122;
    while(i >=97)
    {
        write(1,&i,1);
        i--;

    }

}



/*int main()
{
    ft_print_reverse_alphabet();
    return 0;
}*/
