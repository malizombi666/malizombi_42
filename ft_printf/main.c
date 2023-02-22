//
//  main.c
//  ft_printf
//
//  Created by MANYA on 18.02.23.
//

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
//#include "libft.h"

int is_delimiter(char ch)
{
    if (ch == 'c' || ch == 's' || ch == 'p' || ch == 'd'||
        ch == 'i' || ch == 'u' || ch == 'x' || ch == 'X' || ch == '%')
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

char *array_of_delimiters(char *str, int count)
{
    char    *buffer;
    char    *b;
    
    buffer = calloc(count + 1, sizeof(char));
    b = buffer;
    while (count)
    {
        if (*str == '%')
        {
            str++;
            if (is_delimiter(*str))
            {
                *(buffer++) = *str;
                count--;
                //buffer++;
            }
        }
        str++;
    }
    return (b);
}





/*int ft_printf(const char *s, ...)
{
    char *name;
    int years;
    if (!s)
        return (0);
    va_list ar;
    va_start(ar, s);
    name = va_arg(ar, char *);
    years = va_arg(ar, int);
    ft_putstr_fd(name, 1);
    ft_putnbr_fd(years, 1);
    va_end(ar);
    return (10);
}*/


/*void print_chars(int count, ...)
{
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        char c = (char) va_arg(args, int);
        printf("%c", c);
    }
    printf("\n");
    va_end(args);
}*/

int main()
{
    // insert code here...
    //words(1, 2, 3, 4, 5, 10);
    //printf("Hello, World!\n");
    //ft_printf("m", "ansj", "hello");
    //print_strings("hello", "world", "hi", "\n");
    printf("manelleello helloworld\n");
    char *name = "Mane%ahs% hajsah %  kh% frel%";
    //int years = 27;
    printf("%d\n", count_delimiter(name));
    printf("%s \n", array_of_delimiters(name, count_delimiter(name)));
   
    return 0;
}
