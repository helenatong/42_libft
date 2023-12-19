/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:02:51 by htong             #+#    #+#             */
/*   Updated: 2023/12/19 18:43:33 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nl;

	nl = (long int) n;
	if ((nl < 0))
	{
		ft_putchar_fd('-', fd);
		nl = -nl;
	}
	if (nl >= 10)
	{
		ft_putnbr_fd(nl / 10, fd);
		nl = nl % 10;
	}
	if (nl >= 0 && nl <= 9)
	{
		nl = nl + '0';
		ft_putchar_fd(nl, fd);
	}
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	if (ac != 3)
		return (0);
    ft_putnbr_fd(atoi(av[1]), atoi(av[2]));
	return (0);
}*/
