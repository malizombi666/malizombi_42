#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"


int is_delimiter(char ch)
{
    if (ch == '%' || ch == 'd' || ch == 'i' || ch == 'u'||
        ch == 'X' || ch == 'x' || ch == 'p' || ch == 'c' || ch == 's')
            return (1);
    return (0);
}
int count_delimiter(char *str)
{
    int count;
    
    if (!str)
        return (0);
    count = 0;
    while (*str)
    {
        if (*str == '%')
        {
            str++;
            if (is_delimiter(*str))
                count++;
            else if (!(*str))
                return (count);
            //while (*str && !is_delimiter(*str))
                //str++;
            //if (*str != '\0')
               // count++;
            //else
                //return (count);
        }
        str++;
    }
    return (count);
}
char *array_of_delimiters(char *str, int del_number)
{
    char    *buffer;
    char    *b;
    
    buffer = calloc(del_number + 1, sizeof(char));
    b = buffer;
    while (del_number)
    {
        if (*str == '%')
        {
            str++;
            if (is_delimiter(*str))
            {
                *(buffer++) = *str;
                del_number--;
                //buffer++;
            }
        }
        str++;
    }
    printf("buffer is ->> %s\n", b);
    return (b);
}
int hi_delimiter(char *buffer, int index, va_list *ar)
{
    if (buffer[index] == 'c')
    {
        //printf ("hello in hi va_arg is\n");
        ft_putchar_fd(va_arg(*ar, int));
        return (ft_putchar_fd(va_arg(*ar, int)));
    }
    else if (buffer[index] == 'd')
    {
        printf ("hello in D hi\n");
        return (ft_putnbr_fd(va_arg(*ar, int), 1));
    }
    // else if (buffer[index] == 'd')
    //     count = count + ft_putnbr_fd(va_arg(ar, int));
    // else if (buffer[index] == 's')
    //     *count = *count + ft_putstr_fd(va_arg(ar, char *), 1);
    // else if (buffer[index] == '%')
    //     *count = *count + ft_putchar_fd('%', 1);
    // else if (buffer[index] == 'u')
    //     *count = *count + ft_putnbrUN_fd(va_arg(ar, unsigned int), 1);
    // else if (buffer[index] == 'x')
    //     *count = *count + ft_xputnbr_fd(va_arg(ar, unsigned int), 1);
    // else if (buffer[index] == 'X')
    //     *count = *count + ft_Xputnbr_fd(va_arg(ar, unsigned int), 1);
    // else if (buffer[index] == 'p')
    //     *count = *count + ft_putpointer(va_arg(ar, ??????), 1);
    return (0);
}
int  print_remaining(char *str, va_list *ar, char *buffer)
{
    int count;
    int i;

    count = 0;
    i = 0;
    while (str && *str)
    {
        while (*str && *str != '%')
        {
            count = count + ft_putchar_fd(*str);
            str++;
        }
        if (*str == '%')
        {
            if (is_delimiter(*(++str)))
            {
                printf("\nhi, delimiter! i == %d, count == %d, buffer is %s delimiter is %d\n", i, count, buffer, va_arg(*ar, int));
                count = count + hi_delimiter(buffer, i++, ar); 
                printf("\nhi, delimiter! i == %d, count == %d, buffer is %s delimiter is %d\n", i, count, buffer, va_arg(*ar, int)); 
            }
            else if (*str)
                count = count + ft_putchar_fd(*str);
            str++;
        }
    } 
    return (count);
}

int ft_printf(const char *s, ...)
{
    if (!s)
        return (0);
    va_list ar;
    va_start(ar, s);
    int del_number; 
    char *buffer; 
    int count;
    
    del_number = count_delimiter((char *)s);
    buffer = array_of_delimiters((char *)s, del_number);
    count = 0;
    count = count + print_remaining((char *)s, &ar, buffer);
    va_end(ar);
    return (count);
}


int main (void)
{
    char c = 97;
    //int y = 17;
    char *str = "123%c4";
    int t = ft_printf(str, c);
    printf("\n %d\n", t);
    return (0);
}
