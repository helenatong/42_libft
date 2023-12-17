/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:57:50 by htong             #+#    #+#             */
/*   Updated: 2023/11/09 18:03:06 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Comportement indefini si n > taille(dest ou src)

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destb;
	unsigned char	*srcb;

	i = 0;
	destb = (unsigned char *) dest;
	srcb = (unsigned char *) src;
	while (i < n)
	{
		destb[i] = srcb[i];
		i++;
	}
	return (dest);
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int     main (int argc, char **argv)
{
    ft_memcpy(argv[1], argv[2], atoi(argv[3]));
    memcpy(argv[4], argv[2], atoi(argv[3]));
    printf("%s \n", argv[1]);
	printf("%s \n", argv[4]);
}
*/
