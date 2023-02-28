#include "libft.h"

int is_delimiter(char ch)
{
    if (ch == '%' || ch == 'd' || ch == 'i' || ch == 'u'||
        ch == 'X' || ch == 'x' || ch == 'p' || ch == 'c' || ch == 's')
            return (1);
    return (0);
}

size_t  print_remaining(char **str)
{
    char       *end;
    char       **s1;
    size_t     count;

    if (!(*str))
        return (0);
    count = 0;
    s1 = (char **)str;
    while (**s1)
    {
        if (ft_strchr(*s1, '%') == *s1)
            (*s1)++;
        while (**s1 && !is_delimiter(**s1))
        {
            end = ft_strchr(*s1, '%');
            ft_putstr_fd(ft_substr(*s1, 0, end - *s1), 1);
            count = count + (end - *s1); 
            *s1 = end + 1;
        }
        printf("\nhi, delimiter!\n");
        *s1 = *s1 + 1;
    }
    return (count);
}

int main (void)
{
    char *str = "%u1234%d56%789%%";
    size_t l = print_remaining(&str);
    printf("%lu\n", l);
    //printf("%s\n", n);
    return (0);
}