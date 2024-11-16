/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:01:12 by maen-naj          #+#    #+#             */
/*   Updated: 2024/11/16 17:52:14 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(size_t n, int r)
{
	if (n > 9223372036854775807 && r == 1)
		return (-1);
	if (n > 9223372036854775807 && r == -1)
		return (0);
	return (1);
}

static int	check_2(int s, size_t m, char c)
{
	if (s == 20 && m >= 1844674407370955161 && (c + 48) > 6)
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		r;
	int		s;
	size_t	m;

	i = 0;
	r = 1;
	m = 0;
	s = 0;
	while ((9 <= str[i] && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			r = -1;
	while ('0' <= str[i] && str[i] <= '9' && ++s)
	{
		if (!check_2(s, m, str[i]))
			return (check(9223372036854775809ULL, r));
		m = m * 10 + str[i++] - '0';
		if (check(m, r) == -1 || check(m, r) == 0)
			return (check(m, r));
	}
	return (m * r);
}
