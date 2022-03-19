/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:18:44 by tda-silv          #+#    #+#             */
/*   Updated: 2022/03/19 22:14:18 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*copyl;

	if (lst && *lst && new)
	{
		copyl = *lst;
		while (copyl->next)
			copyl = copyl->next;
		copyl->next = new;
	}
}
/*
#include <stdio.h>

int	main()
{
	t_list *a;
	t_list *b;
	t_list *c;

	int aa = 1;
	int bb = 2;
	int cc = 3;

	a = ft_lstnew(&aa);
	b = ft_lstnew(&bb);
	c = ft_lstnew(&cc);

	a->next = b;

	printf ("\na : %d | b : %d | c : %d", a, b, c);
	printf ("\n%d | %d | %d", *(int *)a->content, *(int *)b->content, *(int *)c->content);
	printf ("\n%d | | \n", a->next);

	printf("\n-----------------\n");

	ft_lstadd_back(&a, c);

	printf("\n%d\n", ft_lstsize(a));
	printf ("\na : %d | b : %d | c : %d", a, b, c);
	printf ("\n%d | %d | %d", *(int *)a->content, *(int *)b->content, *(int *)c->content);
	printf ("\n%d | %d | \n", a->next, b->next);

	free(a);
	free(b);
	free(c);
	return (0);
}
*/
