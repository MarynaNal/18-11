/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:00:12 by mnalyvai          #+#    #+#             */
/*   Updated: 2023/04/10 18:43:50 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*b;
	size_t			i;

	b = (unsigned char *) s;
	c = (unsigned char) c;
	i = 0;
	while (i < n)
	{	
		if (b [i] == c)
			return ((void *)b + i);
		i++;
	}
	return (NULL);
}

/*DESCRIPTION
 14      The memchr() function locates the first occurrence of c (converted to an
 15      unsigned char) in string s.
 16
 17 RETURN VALUES
 18      The memchr() function returns a pointer to the byte located, or NULL if
 19      no such byte exists within n bytes.
 20
 21 */
