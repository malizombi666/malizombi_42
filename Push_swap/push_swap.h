#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct  s_list
{
    int             value;
    struct s_list   *next;
}
    t_list;
t_list  *ft_lstnew(int *content);
t_list  *ft_lstlast(t_list  *lst);
int     ft_lstsize(t_list   *lst);
void    ft_lstadd_front(t_list **lst, t_list   *n);
void    ft_lstadd_back(t_list  **lst, t_list *n);



#endif