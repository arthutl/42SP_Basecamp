/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:39:05 by arporto-          #+#    #+#             */
/*   Updated: 2021/06/13 16:39:06 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative (int n)
{
	if (n >= 0)
	{
		write (1, "P", 1);
	}
	if (n < 0)
	{
		write (1, "N", 1);
	}
}
