/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 19:54:46 by mathferr          #+#    #+#             */
/*   Updated: 2019/12/06 19:54:48 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = dest + ft_strlen(dest);
	while (src[i] != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
