/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:53:48 by maen-naj          #+#    #+#             */
/*   Updated: 2024/11/08 21:13:17 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	start;
	int	len;

	start = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen (s1) - 1;
	if ((ft_strlen(s1) == 0 && ft_strlen(set) == 0))
		return (ft_strdup(""));
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (len >= 0 && s1[len] && ft_strchr(set, s1[len]) != NULL)
		len--;
	return (ft_substr(s1, start, len - start + 1));
}
