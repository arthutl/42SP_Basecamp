/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:13:24 by arporto-          #+#    #+#             */
/*   Updated: 2021/06/18 17:29:13 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char *argv[])
{
	int	rows;
	int	colums;

	rows = 0;
	colums = 0;
	while (argv[rows][colums] != '\0')
	{
		if (argc > 0)
		{
			write(1, &argv[rows][colums], 1);
			colums++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
