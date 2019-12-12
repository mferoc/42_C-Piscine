/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 20:15:12 by mathferr          #+#    #+#             */
/*   Updated: 2019/12/06 20:15:15 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Retornar NULL??????????????? */
#include <stdio.h>

char *ft_strstr(char *str, char *substr)
{
	  char *bg;
	  char *pattern;

	  while (*str) 
	  {
		    bg = str;
		    pattern = substr;
		    
		    while (*str && *pattern && *str == *pattern) 
			{
			      str++;
			      pattern++;
		    }
		    if (!*pattern)
		    	  return bg;
		    	  
		    str = ++bg; 
	  }
	  return NULL;
}
