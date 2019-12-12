/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 18:19:44 by mathferr          #+#    #+#             */
/*   Updated: 2019/11/24 18:50:32 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	topline(int col, char c1, char c2, char c3);
void	midline(int col, int row, char c);
void	botline(int col, char c1, char c2, char c3);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		topline(x, '/', '*', 92);
		midline(x, y, '*');
		if (y >= 2)
			botline(x, 92, '*', '/');
	}
}

void	topline(int col, char c1, char c2, char c3)
{
	int		contcol;

	ft_putchar(c1);
	contcol = col - 2;
	while (contcol > 0)
	{
		ft_putchar(c2);
		contcol--;
	}
	if (col >= 2)
		ft_putchar(c3);
	ft_putchar(10);
}

void	midline(int col, int row, char c)
{
	int		contcol;
	int		controw;

	controw = row - 2;
	while (controw > 0)
	{
		ft_putchar(c);
		contcol = col - 2;
		while (contcol > 0)
		{
			ft_putchar(32);
			contcol--;
		}
		if (col >= 2)
			ft_putchar(c);
		ft_putchar(10);
		controw--;
	}
}

void	botline(int col, char c1, char c2, char c3)
{
	int		contcol;

	contcol = col - 2;
	ft_putchar(c1);
	while (contcol > 0)
	{
		ft_putchar(c2);
		contcol--;
	}
	if (col >= 2)
		ft_putchar(c3);
	ft_putchar(10);
}
