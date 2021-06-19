/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:09:33 by arporto-          #+#    #+#             */
/*   Updated: 2021/06/18 19:50:46 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;
	int	result;
	int	sub;

	count = 0;
	result = nb;
	sub = 1;
	while (result > 0 )
	{
		result = result - sub;
		count++;
		sub += 2;
	}
	if ((count * count) == nb)
		return (count);
	else
		return (0);
}
