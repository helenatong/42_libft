/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:36:10 by htong             #+#    #+#             */
/*   Updated: 2023/11/09 17:59:30 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t				i;
	unsigned char		*ptr;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int     main (int argc, char **argv)
{
    ft_bzero(argv[1], atoi(argv[2]));
    printf("%s", argv[1]);
}
*/