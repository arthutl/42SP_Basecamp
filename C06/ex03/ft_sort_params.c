/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 18:01:56 by arporto-          #+#    #+#             */
/*   Updated: 2021/06/18 20:32:06 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] || s2[i] != '\0'))
	{
		i++;
	}
	return ((unsigned char )s1[i] - (unsigned char)s2[i]);
}

void	ft_print_arg(int argc, char *argv[])
{
	int	rows;
	int	colums;

	rows = 1;
	while (rows < argc)
	{
		colums = 0;
		while (argv[rows][colums] != '\0')
		{
			write(1, &argv[rows][colums], 1);
			colums++;
		}
		write (1, "\n", 1);
		rows++;
	}
}

int	main (int argc, char *argv[])
{
	int		rows;
	int		next_row;
	char		*aux;

	rows = 0;
	while (rows < argc)
	{
		next_row = rows + 1;
		while (next_row < argc)
		{
			if (ft_strcmp(argv[rows], argv[next_row]) > 0)
			{
				aux = argv[rows];
				argv[rows] = argv[next_row];
				argv[next_row] = aux;
			}
			next_row++;
		}
		rows++;
	}
	ft_print_arg(argc, argv);
	return (0);
}
