/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 17:56:52 by mathferr          #+#    #+#             */
/*   Updated: 2019/12/04 19:12:26 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

int		ft_str_is_alpha(char *str)
{
	int set_return;

	set_return = 1;
	while (*str != '\0')
	{
		if ((!(*str >= 'a' && *str <= 'z') && !(*str >= 'A' && *str <= 'Z')))
		{
			set_return = 0;
			return (set_return);
			exit(0);
		}
		str++;
	}
	return (set_return);
}
