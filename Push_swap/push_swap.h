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
//the push_swap commands
void    sa(t_list **stack_a);
void    sb(t_list **stack_b);
void    ss(t_list **stack_a, t_list **stack_b);
void    pb(t_list **stack_a, t_list **stack_b);
void    pa(t_list **stack_a, t_list **stack_b);
void    ra(t_list **stack_a);
void    rb(t_list **stack_b);
void    rr(t_list **stack_a, t_list **stack_b);
void    rra(t_list **stack_a);
void    rrb(t_list **stack_b);
void    rrr(t_list **stack_a, t_list **stack_b);

#endif