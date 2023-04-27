#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

void pb(t_list **stack_a, t_list **stack_b)
{
    t_list  *tmp;

    if (!((*stack_a)->next))
        return ;
    tmp = malloc(sizeof(t_list));
    if (!tmp)
        return ;
    tmp = *stack_a;
    *stack_a = tmp->next;
    ft_lstadd_front(stack_b, tmp);
    tmp = NULL;
    free(tmp);
    // tmp->next = &stack_b;
    // stack_b = tmp;
    //free(tmp);
}

int main (void)
{
    t_list  *stack_a;
    t_list  *stack_b;
    t_list  *tmp;
    int     i;
    t_list  *tt;

    // stack_a->next = NULL;
    // stack_b->next = NULL;
    stack_a = malloc(sizeof(t_list));
    stack_b = malloc(sizeof(t_list));
    stack_a = NULL;
    stack_b = NULL;
    i = 0;
    while (i < 10)
    {
        tmp = ft_lstnew(&i);
        ft_lstadd_front(&stack_a, tmp);
        //printf("stack_a value is %d\n", stack_a->value);
        i = i + 1;
    }
    
    //printf("the last node of a is-->> %d\n", (ft_lstlast(stack_a))->value);
    i = 0;
    while (i < 10)
    {
        tt = ft_lstnew(&i);
        ft_lstadd_front(&stack_b, tt);
        //printf("stack_b value is --> %d\n", stack_b->value);
        i = i + 1;
    }
    printf("BEFORE PB-->>\n");
    tmp = stack_a;
    printf("stack a-->>");
    while (tmp)
    {
        printf("%d", tmp->value);
        tmp = tmp->next;
    }
    tt = stack_b;
    printf("stack b-->>");
    while (tt)
    {
        printf("%d", tt->value);
        tt = tt->next;
    }
    int sizea = ft_lstsize(stack_a);
    int sizeb = ft_lstsize(stack_b);
    printf("stack a value is->> %d\n", stack_a->value);
    printf("stack b value is->> %d\n", stack_b->value);
    printf("stack a size is --> %d\n", sizea);
    printf("stack b size is --> %d\n", sizeb);
    pb(&stack_a, &stack_b);
    pb(&stack_a, &stack_b);
    pb(&stack_a, &stack_b);

    // printf("afetr pb stack a size is --> %d\n", sizea);
    // printf("after pb stack b size is --> %d\n", sizeb);

    
    printf("stack a value is->> %d\n", stack_a->value);
    printf("stack b value is->> %d\n", stack_b->value);

    printf("AFTER PB-->>\n");
    tmp = stack_a;
    printf("stack a-->>");
    while (tmp)
    {
        printf("%d", tmp->value);
        tmp = tmp->next;
    }
    tt = stack_b;
    printf("stack b-->>");
    while (tt)
    {
        printf("%d", tt->value);
        tt = tt->next;
    }
    // tt = stack_a;
    // while (tt)
    // {
    //     printf("stack_a value is--> %d\n", tt->value);
    //     tt = tt->next;
    // }
    //tmp = ft_lstlast(stack_a);
    // printf("tt is ->>%d\n", tt->value);
    
    // while (tt)
    // {
    //     printf("tt value is -->>%d\n", tt->value);
    //     tt = tt->next;
    // }
    // tmp = stack_a->next;
    // while (tmp)
    // {
    //     printf("%d\n,", tmp->value);
    //     tmp = tmp->next;
    // }
    // printf("stack b is->>\n");
    // while (stack_b->next)
    // {
    //     printf("%d\n,", stack_b->value);
    //     stack_b = stack_b->next;
    // }
    return 0;

}