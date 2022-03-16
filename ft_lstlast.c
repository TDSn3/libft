/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:52:12 by tda-silv          #+#    #+#             */
/*   Updated: 2022/03/16 17:12:13 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*nextl;

	nextl = lst;
	while (nextl->next != 0)
		nextl = nextl->next;
	return (nextl);
}
/*
#include <stdio.h>

int main()
{
	t_list *a;
	t_list *b;
	t_list *c;

	a = ft_lstnew((int *)1);
	b = ft_lstnew((int *)2);
	c = ft_lstnew((int *)3);

	a->next = b;
	b->next = c;


	printf ("\na : %d | b : %d | c : %d", a, b, c);
	printf ("\n%d | %d | %d", a->content, b->content, c->content);
	printf ("\n%d | %d | %d\n", a->next, b->next, c->next);

	printf("\n-----------------\n");

	t_list *d;
	d = ft_lstlast(a);
	printf("\n%d\n", d);
	return (0);
}
*/
