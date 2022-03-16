/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:18:44 by tda-silv          #+#    #+#             */
/*   Updated: 2022/03/16 17:13:34 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nextl;

	nextl = *lst;
	while (nextl->next != 0)
		nextl = nextl->next;
	nextl->next = new;
}
/*
#include <stdio.h>

int	main()
{
	t_list *a;
	t_list *b;
	t_list *c;

	a = ft_lstnew((int *)1);
	b = ft_lstnew((int *)2);
	c = ft_lstnew((int *)3);

	a->next = b;

	printf ("\na : %d | b : %d | c : %d", a, b, c);
	printf ("\n%d | %d | %d", a->content, b->content, c->content);
	printf ("\n%d | %d | %d\n", a->next, b->next, c->next);

	printf("\n-----------------\n");

	ft_lstadd_back(&a, c);
	printf ("\na : %d | b : %d | c : %d", a, b, c);
	printf ("\n%d | %d | %d", a->content, b->content, c->content);
	printf ("\n%d | %d | %d\n", a->next, b->next, c->next);
	
	return (0);
}
*/
