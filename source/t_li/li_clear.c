/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   li_clear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <tda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:19:08 by tda-silv          #+#    #+#             */
/*   Updated: 2023/01/05 12:37:06 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	li_clear(t_li **lst)
{
	t_li	**copyli;
	t_li	*copyli_two;

	copyli = lst;
	if (!*lst)
		return ;
	while (*copyli)
	{
		copyli_two = (*copyli)->next;
		(*copyli)->content = -2;
		free(*copyli);
		*copyli = copyli_two;
	}
	*lst = NULL;
}
