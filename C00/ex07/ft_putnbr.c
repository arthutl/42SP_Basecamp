/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:39:40 by arporto-          #+#    #+#             */
/*   Updated: 2021/06/13 16:39:41 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_specific(int nb);

void	ft_putnbr(int nb)
{
	char	n_print[10];
	int		i;
	int		j;
	int		number;

	number = nb;
	i = 0;
	print_specific(nb);
	if (nb < 0 && nb != -2147483648)
		number = nb *(-1);
	while (number > 0)
	{
		n_print[i] = (number % 10) + '0';
		number /= 10;
		i++;
	}
	j = i - 1;
	if (nb < 0 && nb != -2147483648)
		write(1, "-", 1);
	while (j >= 0)
	{
		write (1, &n_print[j], 1);
		j--;
	}
}

void	print_specific(int nb)
{
	if (nb == 0)
		write (1, "0", 1);
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
}
