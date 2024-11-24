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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
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
	if (dstsize == 0 || dstsize <= dl)
		return (dstsize + sl);
	while (src[a] && a < dstsize - dl - 1)
	{
		dst[b] = src[a];
		a++;
		b++;
	}
	dst[b] = '\0';
	return (dl + sl);
}
