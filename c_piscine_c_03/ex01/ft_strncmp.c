/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 19:35:44 by mathferr          #+#    #+#             */
/*   Updated: 2019/12/11 01:00:56 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	
	if(s1[i] != s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}


int main() {

	printf("%d\n\n", ft_strncmp("abc", "xyz", 3));

	printf("%d\n\n", strncmp("abc", "xyz", 3));

}
