/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 20:01:08 by mnalyvai          #+#    #+#             */
/*   Updated: 2023/11/03 16:27:22 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strmem;
	char	*stdest;

	strmem = malloc(sizeof(char) * (ft_strlen((char *)s1)
				+ ft_strlen((char *)s2) + 1));
	if (!strmem)
		return (NULL);
	stdest = strmem;
	while (*s1)
	{
		*strmem = *s1;
		strmem++;
		s1++;
	}
	while (*s2)
	{
		*strmem = *s2;
		strmem++;
		s2++;
	}
	*strmem = '\0';
	return (stdest);
}
