#include "libft.h"
#include <stdarg.h>

int is_delimiter(char ch)
{
    if (ch == '%' || ch == 'd' || ch == 'i' || ch == 'u'||
        ch == 'X' || ch == 'x' || ch == 'p' || ch == 'c' || ch == 's')
            return (1);
    return (0);
}

int  print_remaining(char *str, va_list ar, char *buffer)
{
    int count;
    int i;

    count = 0;
    i = 0;
    while (str && *str)
    {
        while (*str && *str != '%')
        {
            count = count + ft_putchar_fd(*str, 1);
            str++;
        }
        if (*str == '%')
        {
            if (is_delimiter(*(++str)))
                printf("\nhi, delimiter!\n");
                hi_delimiter(buffer, ++i, &count, ar);
            else if (*str)
                count = count + ft_putchar_fd(*str, 1);
            str++;
        }
    } 
    return (count);
}

int main (void)
{
    char *str = "hi makelle, %, %s%c%%";
    int l = print_remaining(str);
    printf("\n%d \n", l);
    //printf("%s\n", n);
    return (0);
}
