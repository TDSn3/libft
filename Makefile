# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tda-silv <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/11 16:59:26 by tda-silv          #+#    #+#              #
#    Updated: 2021/12/11 17:06:14 by tda-silv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TEXT = "42 is for the braves"

regle_a:
	echo $(TEXT)

regle_b: regle_a
	echo "regle B"
