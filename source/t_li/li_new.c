/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   li_new.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <tda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 10:59:24 by tda-silv          #+#    #+#             */
/*   Updated: 2023/01/05 12:37:11 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_li	*li_new(int content)
{
	t_li	*ln;

	ln = malloc(sizeof(t_li));
	if (!ln)
		return (NULL);
	ln->content = content;
	ln->next = NULL;
	ln->prev = NULL;
	return (ln);
}
