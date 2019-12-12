/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 00:25:04 by anolivei          #+#    #+#             */
/*   Updated: 2019/11/23 23:01:18 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letra);

void	print_primeira_linha(int x)
{
	int cont_coluna;

	ft_putchar('/');
	cont_coluna = x - 2;
	while (cont_coluna > 0)
	{
		ft_putchar('*');
		cont_coluna--;
	}
	ft_putchar(92);
	ft_putchar('\n');
}

void	print_meio(int x, int y)
{
	int cont_linha;
	int cont_coluna;

	cont_linha = y - 2;
	while (cont_linha > 0)
	{
		ft_putchar('*');
		cont_coluna = x - 2;
		while (cont_coluna > 0)
		{
			ft_putchar(' ');
			cont_coluna--;
		}
		ft_putchar('*');
		ft_putchar('\n');
		cont_linha--;
	}
}

void	print_ultima_linha(int x)
{
	int cont_coluna;

	cont_coluna = x - 2;
	ft_putchar(92);
	while (cont_coluna > 0)
	{
		ft_putchar('*');
		cont_coluna--;
	}
	ft_putchar('/');
}

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		print_primeira_linha(x);
		print_meio(x, y);
		print_ultima_linha(x);
	}
}
