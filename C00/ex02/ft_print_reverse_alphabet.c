/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:38:58 by arporto-          #+#    #+#             */
/*   Updated: 2021/06/13 16:38:59 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet (void)
{
	int	a;
	int	z;

	a = 97;
	z = 122;
	while (a <= z)
	{
		write (1, &z, 1);
		z--;
	}
}
