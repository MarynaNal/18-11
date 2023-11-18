/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:31:09 by mnalyvai          #+#    #+#             */
/*   Updated: 2023/11/10 13:55:25 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_string;
	unsigned int	i;

	if (!s)
		return (NULL);
	new_string = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!new_string)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(new_string + i) = f(i,*(s + i));
		i++;
	}
	*(new_string + i) = 0;
	return (new_string);
}
/*
s: La string que iterar.
f: La función a aplicar sobre cada carácter.
*/
