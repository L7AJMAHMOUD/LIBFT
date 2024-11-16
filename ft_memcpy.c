/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:30:51 by maen-naj          #+#    #+#             */
/*   Updated: 2024/11/16 17:55:38 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*s;
	char		*d;

	i = 0;
	s = src;
	d = dst;
	if (!dst && !src)
		return NULL;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
// #include <string.h>
// #include <stdio.h>
// int main ()
// {
// 	char *x = NULL;
// 	char *y = NULL;
	
// 	printf("%s",ft_memcpy(x,y,2));
// }