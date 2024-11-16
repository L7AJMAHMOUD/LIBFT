/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:48:46 by maen-naj          #+#    #+#             */
/*   Updated: 2024/11/08 20:51:58 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (s[0] == '\0' && (char)c == '\0')
		return ((char *)(s));
	while (i < ft_strlen(s))
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		else if (s[i + 1] == '\0' && (char)c == '\0')
			return ((char *)(s + i + 1));
		i++;
	}
	return (NULL);
}
