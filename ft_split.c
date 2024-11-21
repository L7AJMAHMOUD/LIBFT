/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:32:26 by maen-naj          #+#    #+#             */
/*   Updated: 2024/11/09 19:43:00 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_alocation(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static int	ln(char *s, char c)
{
	int	length;

	length = 0;
	while (s[length] && s[length] != c)
		length++;
	return (length);
}

static char	**double_array(int words)
{
	char	**p;

	p = malloc((words + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	return (p);
}

static int	count_word(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

static char	**double_array(int words)
{
	char	**p;

	p = malloc((words + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	return (p);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	int		i;
	int		len_w;
	int		pos;
	char	**k;

	if (!s)
		return (NULL);
	words = count_word((char *)s, c);
	pos = 0;
	i = 0;
	k = double_array(words);
	while (i < words)
	{
		while (s[pos] == c)
			pos++;
		len_w = ln((char *)&s[pos], c);
		k[i] = malloc((len_w + 1) * sizeof(char));
		if (!k[i])
			return (free_alocation(k));
		ft_strlcpy(k[i], &s[pos], len_w + 1);
		k[i][len_w] = '\0';
		pos = pos + len_w;
		i++;
	}
	k[i] = NULL;
	return (k);
}
// #include <libc.h>
// int main ()
// {
// 	char **result = ft_split("HEllo",' ');
// 	printf("%s\n",result[0]);
// 	printf("%s\n",result[1]);
// 	// printf("%s",result[2]);
// }