/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 14:34:46 by mathferr          #+#    #+#             */
/*   Updated: 2019/12/11 14:34:48 by mathferr         ###   ########.fr       */
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

int ft_strlcat(char *dest, char *src, int size)
{
	int i;
	int src_len;
	int dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= 0)
		return dest_len;
	while (dest_len < size)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (ft_strlen(dest));
}
