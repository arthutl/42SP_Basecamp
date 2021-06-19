/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 17:26:52 by arporto-          #+#    #+#             */
/*   Updated: 2021/06/18 23:35:03 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;
	int	x;
	int	number;

	if (nb == 2)
		return (1);
	else if (nb < 2 || nb % 2 == 0)
		return (0);
	x = 0;
	count = 2;
	number = nb / 2;
	while (count < number)
	{
		if (nb % count == 0)
			return (0);
		count++;
	}
	return (1);
}
