/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:44:55 by arporto-          #+#    #+#             */
/*   Updated: 2021/06/13 16:44:56 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char a);
int		p_a (int x, int y, int j, int i);
int		p_c (int x, int y, int j, int i);
int		p_b (int x, int y, int j, int i);
int		p_hollow (int x, int y, int j, int i);
int	g_j;
int	g_i;

void	rush (int x, int y)
{
	g_i = 1;
	while (g_i <= y)
	{
		g_j = 1;
		while (g_j <= x)
		{
			if ((p_a (x, y, g_j, g_i) == 42)
				|| (p_b (x, y, g_j, g_i) == 42)
				|| (p_c (x, y, g_j, g_i) == 42)
				|| (p_hollow (x, y, g_j, g_i) == 42))
			{
				g_j++;
			}
		}
		if (x > 0)
		{
			write (1, "\n", 1);
		}
		g_i++;
	}
}

int	p_a (x, y, j, i)
{
	if ((j == 1 && i == 1) || (i == 1 && j == x) || (y == 1 && x == 1))
	{
		ft_putchar ('A');
		return (42);
	}
	else
		return (0);
}

int	p_c (x, y, j, i)
{
	if ((j == 1 && i == y) || (j == x && i == y))
	{
		ft_putchar ('C');
		return (42);
	}
	else
		return (0);
}

int	p_b (x, y, j, i)
{
	if ((j > 1 && j < x) && (i == 1 || i == y))
	{
		ft_putchar ('B');
		return (42);
	}
	else if ((i > 1 && i < y) && (j == 1 || j == x))
	{
		ft_putchar ('B');
		return (42);
	}
	else
		return (0);
}

int	p_hollow (x, y, j, i)
{
	if ((j > 1 && j < x && i > 1 && i < y))
	{
		ft_putchar(' ');
		return (42);
	}
	else
		return (0);
}
