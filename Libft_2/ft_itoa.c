/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:56:27 by mnalyvai          #+#    #+#             */
/*   Updated: 2023/11/17 13:06:14 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_digit(long num)
{
	int	cur;

	cur = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		cur++;
	while (num != 0)
	{
		num = num / 10;
		cur++;
	}
	return (cur);
}

char	*ft_itoa(int n)
{
	long	len;
	long	nl;
	char	*result;

	len = num_digit(n);
	nl = n;
	if (n < 0)
		nl *= -1;
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	len--;
	if (nl == 0)
		result[0] = '0';
	else
	{
		while (len >= 0)
		{
//			printf("len = %li\n", len);
			result[len] = (nl % 10) + '0';
			nl = nl / 10;
			len--;
		}
		if (n < 0)
			result[0] = '-';
	}
	return (result);
}
/*
int main(void)
{
	int a;
	char *newp;

	a = -5896;
	newp = ft_itoa(a);
	printf("Resultado: %s", newp);
}*/
