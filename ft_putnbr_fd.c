/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maen-naj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:29:46 by maen-naj          #+#    #+#             */
/*   Updated: 2024/11/16 17:56:00 by maen-naj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	pchar(char c, int fd)
{
	write(fd, &c, 1);
}

static void	nbr(int nb, int fd)
{
	if (nb < 0)
	{
		pchar('-', fd);
		nb *= -1;
		nbr(nb, fd);
	}
	else if (nb > 9)
	{
		nbr(nb / 10, fd);
		nbr(nb % 10, fd);
	}
	else
		pchar(nb + 48, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
		nbr(n, fd);
}
