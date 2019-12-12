/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 19:30:54 by mathferr          #+#    #+#             */
/*   Updated: 2019/11/28 21:28:29 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int x;
	int y;
	int z;

	x = -1;
	while (++x <= 9)
	{
		y = x;
		while (++y <= 9)
		{
			z = y;
			while (++z <= 9)
			{
				ft_putchar(x + '0');
				ft_putchar(y + '0');
				ft_putchar(z + '0');
				if (x != 7)
					write(1, ", ", 2);
			}
		}
	}
}
