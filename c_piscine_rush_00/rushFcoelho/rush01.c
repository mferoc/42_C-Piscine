/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 18:26:20 by fcoelho           #+#    #+#             */
/*   Updated: 2019/11/23 20:15:42 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

void	topline(int x);
void	midline(int x, int y);
void	botline(int x, int y);
void	ft_putchar(char print);

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		topline(x);
		midline(x, y);
		botline(x, y);
	}
}

void	topline(int x)
{
	int		contcol;
	char	bar;
	char	star;
	char	cbar;

	bar = '/';
	star = '*';
	cbar = 92;
	ft_putchar(bar);
	contcol = x - 2;
	while (contcol > 0)
	{
		ft_putchar(star);
		contcol--;
	}
	ft_putchar(cbar);
	write(1, "\n", 1);
}

void	midline(int x, int y)
{
	int		a;
	int		c;
	char	star;
	char	spc;

	star = '*';
	spc = ' ';
	c = y - 2;
	while (c > 0)
	{
		ft_putchar(star);
		a = x - 2;
		while (a > 0)
		{
			ft_putchar(spc);
			a--;
		}
		ft_putchar(star);
		write(1, "\n", 1);
		c--;
	}
}

void	botline(int x, int y)
{
	int		a;
	char	cbar;
	char	star;
	char	bar;

	cbar = 92;
	star = '*';
	bar = '/';
	a = x - 2;
	ft_putchar(cbar);
	while (a > 0)
	{
		ft_putchar(star);
		a--;
	}
	ft_putchar(bar);
	write(1, "\n", 1);
	y = 0;
}
