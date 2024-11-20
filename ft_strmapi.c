/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:02:28 by maen-naj          #+#    #+#             */
/*   Updated: 2024/11/16 17:57:20 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		j;
	char	p;
	int		len;
	char	*loc;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	loc = malloc((len + 1) * sizeof(char));
	j = 0;
	if (!loc)
		return (NULL);
	while (s[i])
	{
		p = (*f)(i, s[i]);
		loc[j++] = p;
		i++;
	}
	loc[j] = '\0';
	return (loc);
}
