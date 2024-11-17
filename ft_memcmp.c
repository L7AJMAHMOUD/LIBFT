/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:27:15 by maen-naj          #+#    #+#             */
/*   Updated: 2024/11/16 17:55:03 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*tab1;
	const unsigned char	*tab2;

	i = 0;
	tab1 = s1;
	tab2 = s2;
	if (n == 0)
		return (0);
	while (tab1[i] == tab2[i] && i < n)
	{
		if (i == n - 1)
			return (0);
		i++;
	}
	return (tab1[i] - tab2[i]);
}
