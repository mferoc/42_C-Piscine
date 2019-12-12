/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 18:37:37 by mathferr          #+#    #+#             */
/*   Updated: 2019/12/02 19:08:49 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int big_nb;

	big_nb = nb;
	if (big_nb < 0)
	{
		ft_putchar('-');
		big_nb = (big_nb * -1);
	}
	if (big_nb >= 10)
	{
		ft_putnbr(big_nb / 10);
		ft_putchar((big_nb % 10) + '0');
	}
	else
	{
		big_nb = big_nb + '0';
		ft_putchar(big_nb);
	}
}
