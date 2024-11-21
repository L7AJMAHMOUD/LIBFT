/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:58:19 by maen-naj          #+#    #+#             */
/*   Updated: 2024/11/08 20:59:01 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dl;
	size_t	sl;
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	sl = ft_strlen(src);
	while (dst[b])
		b++;
	dl = b;
	if (size == 0 || size <= dl)
		return (size + sl);
	while (src[a] && a < size - dl - 1)
	{
		dst[b] = src[a];
		a++;
		b++;
	}
	dst[b] = '\0';
	return (dl + sl);
}
