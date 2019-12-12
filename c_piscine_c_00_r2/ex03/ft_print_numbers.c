/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 19:20:30 by mathferr          #+#    #+#             */
/*   Updated: 2019/11/28 19:26:35 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int		number;
	char	c_number;

	number = 0;
	while (number <= 9)
	{
		c_number = number + '0';
		ft_putchar(c_number);
		number++;
	}
}
