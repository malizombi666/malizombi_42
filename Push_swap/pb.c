#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

void    pb(t_list **stack_a, t_list **stack_b)
{
    t_list  *tmp;

    if (!(*stack_a))
        return ;
    tmp = malloc(sizeof(t_list *));
    if (!tmp)
        return ;
    tmp = *stack_a;
    *stack_a = tmp->next;
    ft_lstadd_front(stack_b, tmp);
    tmp = NULL;
    free(tmp);
}

void    pa(t_list **stack_a, t_list **stack_b)
{
    pb(stack_b, stack_a);
}

void sa(t_list **stack_a)
{
    t_list  *tmp;

    if (!(*stack_a) || ft_lstsize(*stack_a) == 1)
        return ;
    tmp = malloc(sizeof(t_list *));
    if (!tmp)
        return ;
    tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    tmp->next = (*stack_a)->next;
    (*stack_a)->next = tmp;
    tmp = NULL;
    free(tmp);
}

void    sb(t_list **stack_b)
{
    sa(stack_b);
}

void    ss(t_list **stack_a, t_list **stack_b)
{
    sa(stack_a);
    sb(stack_b);
}

void ra(t_list **stack_a)
{
    t_list  *tmp;

    if (!(*stack_a) || ft_lstsize(*stack_a) == 1)
        return ;
    tmp = malloc(sizeof(t_list *));
    if (!tmp)
        return ;
    tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    ft_lstadd_back(stack_a, tmp);
    tmp = NULL;
    free(tmp);
}

void    rb(t_list **stack_b)
{
    ra(stack_b);
}

void rr(t_list **stack_a, t_list **stack_b)
{
    ra(stack_a);
    rb(stack_b);
}

void rra(t_list **stack_a)
{
    t_list  *tmp;
    int     alen;

    if (!(*stack_a) || ft_lstsize(*stack_a) == 1)
        return ;
    tmp = malloc(sizeof(t_list *));
    if (!tmp)
        return ;
    alen = ft_lstsize(*stack_a);
    tmp = ft_lstlast(*stack_a);
    ft_lstadd_front(stack_a, tmp);
    alen = alen - 1;
    while (alen--)
        tmp = tmp->next;
    tmp->next = NULL;
    tmp = NULL;
    free(tmp);
}

void    rrb(t_list **stack_b)
{
    rra(stack_b);
}

void rrr(t_list **stack_a, t_list **stack_b)
{
    rra(stack_a);
    rrb(stack_b);
}

int main (void)
{
    t_list  *stack_a;
    t_list  *stack_b;
    t_list  *tmp;
    int     i;
    //t_list  *tt;

    // stack_a->next = NULL;
    // stack_b->next = NULL;
    stack_a = malloc(sizeof(t_list));
    stack_b = malloc(sizeof(t_list));
    stack_a = NULL;
    stack_b = NULL;

    //stack_a creation
    i = 0;
    while (i < 10)
    {
        tmp = ft_lstnew(&i);
        ft_lstadd_front(&stack_a, tmp);
        //printf("stack_a value is %d\n", stack_a->value);
        i = i + 1;
    }

    printf("\n stack_a was -->");
    tmp = stack_a;
    while (tmp)
    {
        printf("%d", tmp->value);
        tmp = tmp->next;
    }


    //stack_b creation via pushing from a
    i = 4;
    while (i--)
    {
        pb(&stack_a, &stack_b);
    }

    printf("stack_a becomes-->\n");
    tmp = stack_a;
    while (tmp)
    {
        printf("%d", tmp->value);
        tmp = tmp->next;
    }

    printf("\n stack_b becomes -->");
    tmp = stack_b;
    while (tmp)
    {
        printf("%d", tmp->value);
        tmp = tmp->next;
    }

    printf("check of the ra rb and rr\n");
   
    rrr(&stack_a, &stack_b);
    rrr(&stack_a, &stack_b);
    printf("after ss the stacks become->>\n");
    printf("stack_a becomes-->");
    tmp = stack_a;
    while (tmp)
    {
        printf("%d", tmp->value);
        tmp = tmp->next;
    }

    printf("\n stack_b becomes -->");
    tmp = stack_b;
    while (tmp)
    {
        printf("%d", tmp->value);
        tmp = tmp->next;
    }



    printf("check of the ra rb and rr\n");
    
    //printf("the last node of a is-->> %d\n", (ft_lstlast(stack_a))->value);
    // i = 0;
    // while (i < 10)
    // {
    //     tt = ft_lstnew(&i);
    //     ft_lstadd_front(&stack_b, tt);
    //     //printf("stack_b value is --> %d\n", stack_b->value);
    //     i = i + 1;
    // }
    // printf("BEFORE PB-->>\n");
    // tmp = stack_a;
    // printf("stack a-->>");
    // while (tmp)
    // {
    //     printf("%d", tmp->value);
    //     tmp = tmp->next;
    // }
    // tt = stack_b;
    // printf("stack b-->>");
    // while (tt)
    // {
    //     printf("%d", tt->value);
    //     tt = tt->next;
    // }
    // int sizea = ft_lstsize(stack_a);
    // int sizeb = ft_lstsize(stack_b);
    // printf("stack a value is->> %d\n", stack_a->value);
    // printf("stack b value is->> %d\n", stack_b->value);
    // printf("stack a size is --> %d\n", sizea);
    // printf("stack b size is --> %d\n", sizeb);
    // pb(&stack_a, &stack_b);
    // pb(&stack_a, &stack_b);
    // pb(&stack_a, &stack_b);

    // // printf("afetr pb stack a size is --> %d\n", sizea);
    // // printf("after pb stack b size is --> %d\n", sizeb);

    
    // printf("stack a value is->> %d\n", stack_a->value);
    // printf("stack b value is->> %d\n", stack_b->value);

    // printf("AFTER PB-->>\n");
    // tmp = stack_a;
    // printf("stack a-->>");
    // while (tmp)
    // {
    //     printf("%d", tmp->value);
    //     tmp = tmp->next;
    // }
    // tt = stack_b;
    // printf("stack b-->>");
    // while (tt)
    // {
    //     printf("%d", tt->value);
    //     tt = tt->next;
    // }
    // sa(&stack_a);
    // sa(&stack_b);
    // printf("after sa stack_a-->");
    // tt = stack_a;
    // while (tt)
    // {
    //     printf("stack_a value is--> %d\n", tt->value);
    //     tt = tt->next;
    // }
    // rra(&stack_a);
    // rra(&stack_a);
    // rra(&stack_a);
    // rra(&stack_a);
    // // rra(&stack_a);
    // printf("after rra stack_a-->");
    // tt = stack_a;
    // while (tt)
    // {
    //     printf("rra: stack_a value is--> %d\n", tt->value);
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