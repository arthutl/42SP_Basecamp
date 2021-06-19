/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 17:58:42 by arporto-          #+#    #+#             */
/*   Updated: 2021/06/18 19:22:02 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int	rows;
	int	colums;

	rows = argc - 1;
	while (rows > 0)
	{
		colums = 0;
		while (argv[rows][colums] != '\0')
		{
			write (1, &argv[rows][colums], 1);
			colums++;
		}
		write (1, "\n", 1);
		rows--;
	}
}
