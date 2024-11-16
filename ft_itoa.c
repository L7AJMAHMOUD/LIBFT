/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:48:33 by maen-naj          #+#    #+#             */
/*   Updated: 2024/11/08 20:22:46 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	len(long nb)
{
	int	l;

	l = 0;
	if (nb <= 0)
	{
		l++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		l;
	long	nb;

	nb = n;
	l = len (nb) + 1;
	str = (char *)ft_calloc(l, sizeof(char));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	str[--l] = '\0';
	while (l--)
	{
		if (str[l] == '-')
			break ;
		str[l] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str);
}
