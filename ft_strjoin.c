/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:31:31 by maen-naj          #+#    #+#             */
/*   Updated: 2024/11/16 17:56:50 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*loc;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	loc = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!loc)
		return (NULL);
	while (s1[i])
		loc[j++] = s1[i++];
	i = 0;
	while (s2[i])
		loc[j++] = s2[i++];
	loc[j] = '\0';
	return (loc);
}
