/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:40:25 by arporto-          #+#    #+#             */
/*   Updated: 2021/06/18 01:51:28 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	count;

	count = 0;
	while (count < size / 2)
	{
		aux = tab[count];
		tab[count] = tab[size - 1 - count];
		tab[size - 1 - count] = aux;
		count++;
	}
}
