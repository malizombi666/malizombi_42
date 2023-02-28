#include "libft.h"
#include <stdarg.h>

size_t hi_delimiter(char *buffer, size_t index, size_t *count, va_list ar)
{
    if (buffer[index] == 'c')
        *count = *count + ft_putchar_fd(va_arg(ar, int), 1);
    // else if (buffer[index] == 'i')
    //     *count = *count + ft_putnbr_fd(va_arg(ar, int), 1);
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
    return (*count);
}