#include <unistd.h>
 
void    f_zero(char nb)
{
        if (nb == 0)
        {
                write(1, "0", 1);
        }
}
 
void    f_flag_end(char f, char *c)
{
        if (f)
        {
                *c = '-';
        }
}
 
void    f_flag_begin(char *f, char *r, int *nb)
{
        if (*nb < 0)
        {
                *f = 1;
                *nb = -(*nb);
                *r = 0;
        }
}
 
void    f_range(char *b, char *r)
{
        while (*b != 0)
        {
                *b = *b / 10;
                *r = *r + 1;
        }
}
 
void    ft_putnbr(int nb)
{
        char c[12];
        char f;
        char r;
        char b;
        char i;
 
        f = 0;
        r = -1;
        b = nb;
        f_zero(nb);
        f_flag_begin(&f, &r, &nb);
        f_range(&b, &r);
        i = 0;
        while (i <= r)
        {
                c[r - i] = (nb % 10) + '0';
                nb = nb / 10;
                i++;
        }
        f_flag_end(f, &c[0]);
        write(1, c, r + 1);
}
