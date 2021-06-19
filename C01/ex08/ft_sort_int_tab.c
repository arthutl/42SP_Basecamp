/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:40:28 by arporto-          #+#    #+#             */
/*   Updated: 2021/06/13 16:40:30 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	compare;
	int	aux;

	count = 0;
	while (count < size)
	{
		compare = count + 1;
		while (compare < size)
		{
			if (tab[count] > tab[compare])
			{
				aux = tab[count];
				tab[count] = tab[compare];
				tab[compare] = aux;
			}
			compare++;
		}
		count++;
	}
}
