/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:53:11 by mnalyvai          #+#    #+#             */
/*   Updated: 2023/11/09 20:10:20 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	check_if_in_set(char *set, char letter)
{
	while (*set)
	{
		if (*set == letter)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	length;

	if (!s1 || !set)
		return ((char *)s1);
	i = 0;
	length = ft_strlen((char *)s1);
	while (*(s1 + i) && check_if_in_set((char *)set, *(s1 + i)))
		i++;
	while (i < length && check_if_in_set((char *)set, *(s1 + length - 1)))
		length--;
	return (ft_substr(s1, i, length - i));
}
/*
s1: La string que debe ser recortada.
set: Los caracteres a eliminar de la string.
*/