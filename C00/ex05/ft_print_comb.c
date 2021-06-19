/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:39:08 by arporto-          #+#    #+#             */
/*   Updated: 2021/06/13 16:39:10 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	number_one;
	int	numer_two;
	int	number_three;

	number_one = '0';
	while (number_one <= '7' )
	{
		numer_two = '0';
		while (++numer_two <= '8')
		{
			number_three = '1';
			while (++number_three <= '9')
			{
				if ((number_one < numer_two) && (numer_two < number_three))
				{
					write (1, &number_one, 1);
					write (1, &numer_two, 1);
					write (1, &number_three, 1);
					if (number_one != '7')
						write (1, ", ", 2);
				}
			}
		}
		number_one++;
	}
}
