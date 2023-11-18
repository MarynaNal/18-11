/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:40:54 by mnalyvai          #+#    #+#             */
/*   Updated: 2023/04/09 20:41:55 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	length;
	char	*str;

	str = (char *) s;
	length = ft_strlen(str);
	while (length)
	{
		if (*(str + length) == (char)c)
			return (str + length);
		length--;
	}
	if (*(str + length) == (char)c)
		return (str + length);
	return (NULL);
}
/*The strrchr() function is identical to strchr(), except it locates 
the last occurrence of c.*/
