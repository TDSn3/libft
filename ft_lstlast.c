/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:52:12 by tda-silv          #+#    #+#             */
/*   Updated: 2022/03/19 22:38:38 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
		return (lst);
	}
	else
		return (lst);
}
/*
#include <stdio.h>

int main()
{
	t_list *a;
	t_list *b;
	t_list *c;

	int	aa = 1;
	int	bb = 2;
	int	cc = 3;

	a = ft_lstnew(&aa);
	b = ft_lstnew(&bb);
	c = ft_lstnew(&cc);

	a->next = b;
	b->next = c;


	printf ("\na : %d | b : %d | c : %d", a, b, c);
	printf ("\n%d | %d | %d", *(int *)a->content, *(int *)b->content, *(int *)c->content);
	printf ("\n%d | %d | \n", a->next, b->next);

	printf("\n-----------------\n");

	t_list *d;
	d = ft_lstnew(&aa);
	(ft_lstlast(a))->next = d;
	printf("\n%d |>| %d\n", d, c->next);
	printf ("\na : %d | b : %d | c : %d", a, b, c);
	printf ("\n%d | %d | %d", *(int *)a->content, *(int *)b->content, *(int *)c->content);
	printf ("\n%d | %d | \n", a->next, b->next);

	free(a);
	free(b);
	free(c);
	free(d);
	return (0);
}
*/
