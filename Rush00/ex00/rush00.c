/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arporto- <arporto-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:44:49 by arporto-          #+#    #+#             */
/*   Updated: 2021/06/15 21:59:28 by arporto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char a);
int		p_circle (int x, int y, int j, int i);
int		p_pipe (int x, int y, int j, int i);
int		p_hyphen (int x, int y, int j, int i);
int		p_hollow (int x, int y, int j, int i);
int	g_j;
int	g_i;

void	rush(int x, int y)
{
	g_i = 1;
	while (g_i <= y)
	{
		g_j = 1;
		while (g_j <= x)
		{
			if ((p_circle (x, y, g_j, g_i) == 42)
				|| (p_pipe (x, y, g_j, g_i) == 42)
				|| (p_hyphen (x, y, g_j, g_i) == 42)
				|| (p_hollow (x, y, g_j, g_i) == 42))
			{
				g_j++;
			}
		}
		if (x > 0)
		{	
			write(1, "\n", 1);
		}
		g_i++;
	}
}

int	p_circle (x, y, j, i)
{
	if ((j == 1 && i == 1) || (j == x && i == 1)
		|| (j == 1 && i == y) || (j == x && i == y))
	{
		ft_putchar('o');
		return (42);
	}
	else
	{
		return (0);
	}
}

int	p_hollow (x, y, j, i)
{
	if (j > 1 && j < x && i > 1 && i < y)
	{
		ft_putchar(' ');
		return (42);
	}
	else
	{
		return (0);
	}
}

int	p_hyphen (x, y, j, i)
{
	if ((j > 1 && j < x) && (i == 1 || i == y))
	{
		ft_putchar('-');
		return (42);
	}
	else
	{
		return (0);
	}
}

int	p_pipe (x, y, j, i)
{
	if ((j == 1 || j == x) && (i > 1 && i < y))
	{
		ft_putchar('|');
		return (42);
	}
	else
	{
		return (0);
	}
}
