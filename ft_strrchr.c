/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 21:07:39 by maen-naj          #+#    #+#             */
/*   Updated: 2024/11/16 17:57:34 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	ln;

	ln = ft_strlen(s);
	while (ln >= 0)
	{
		if (s[ln] == (char)c)
			return ((char *)&s[ln]);
		ln--;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char tab[] = "";
// 	char *p = ft_strrchr(tab,'\0');
// 	char *f = strrchr(tab,'\0');

// 	if(p == f)
// 		printf("SUCCESS\n");
// 	else
// 		printf("FAILURE\n");
// 	printf("%s\n",p);
// 	printf("%s\n",f);
// }