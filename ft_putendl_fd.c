/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:17:19 by htong             #+#    #+#             */
/*   Updated: 2023/12/15 20:54:02 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = -1;
	if (!s)
		return ;
	while (s[++i])
		write(fd, &s[i], 1);
	write(fd, "\n", 1);
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	if (ac != 3)
		return (0);
    ft_putendl_fd(av[1], atoi(av[2]));
	return (0);
}
*/
