/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:39:26 by arporto-          #+#    #+#             */
/*   Updated: 2021/06/13 16:39:28 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2 (void)
{
	int	first_number;
	int	second_number;

	first_number = 0;
	second_number = 1;
	while (first_number <= 98)
	{
		while (second_number <= 99)
		{
			if (first_number != second_number)
			{
				ft_print_convert(first_number);
				write (1, " ", 2);
				ft_print_convert(second_number);
				if (first_number != 98)
					write (1, ", ", 2);
				second_number++;
			}
		}
		first_number++;
		second_number = first_number + 1;
	}
}
