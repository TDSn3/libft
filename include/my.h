/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-silv <tda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:19:40 by tda-silv          #+#    #+#             */
/*   Updated: 2023/01/05 13:18:31 by tda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_H
# define MY_H

char			*my_strjoin_free(char **s1, char **s2);
long long int	my_atoi_hex(const char *nptr);
char			**my_strdjoin(char **strd, char *s);
size_t			my_strdlen(char **strd);
int				my_strdfree(char ***strd);

#endif