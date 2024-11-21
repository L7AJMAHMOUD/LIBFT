/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:19:41 by maen-naj          #+#    #+#             */
/*   Updated: 2024/11/08 21:18:00 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_len;
	unsigned int	sub_len;
	char			*substr;

	if (!s)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	sub_len = s_len - start;
	if (sub_len > len)
		sub_len = len;
	substr = malloc((sub_len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (i < sub_len)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
