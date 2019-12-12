/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 19:24:45 by mathferr          #+#    #+#             */
/*   Updated: 2019/12/03 17:56:34 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int aux;
	int count;

	count = 0;
	while (count < size - 1)
	{
		if (tab[count] > tab[count + 1])
		{
			aux = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = aux;
			count = 0;
		}
		else
		{
			count++;
		}
	}
}
