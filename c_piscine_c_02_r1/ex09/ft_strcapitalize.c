/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 17:17:36 by mathferr          #+#    #+#             */
/*   Updated: 2019/12/05 17:17:38 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((index == 0 || str[index - 1] == 32 ||
		(str[index - 1] >= 91 && str[index - 1] <= 96) ||
		(str[index - 1] >= 123) ||
		(str[index - 1] >= 33 && str[index - 1] <= 47) ||
		(str[index - 1] >= 58 && str[index - 1] <= 64)) &&
		(str[index] >= 'a' && str[index] <= 'z'))
			str[index] -= 32;
		else if (!(index == 0 || str[index - 1] == 32 ||
		(str[index - 1] >= 91 && str[index - 1] <= 96) ||
		(str[index - 1] >= 123) ||
		(str[index - 1] >= 33 && str[index - 1] <= 47) ||
		(str[index - 1] >= 58 && str[index - 1] <= 64)) &&
		(str[index] >= 'A' && str[index] <= 'Z'))
			str[index] += 32;
		index++;
	}
	return (str);
}
