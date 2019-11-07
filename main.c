/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 19:40:57 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/06 20:48:09 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putendl("usage: fillit file");
	else
		if (check_tetriminos_file(argv[1]))
			ft_putendl("file is good!");
	return (0);
}
