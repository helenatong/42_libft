/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:51:09 by htong             #+#    #+#             */
/*   Updated: 2023/11/09 18:03:44 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Role - Rempli un bloc de memoire de taille n octets avec un char c [max 256]
 * int n est interprete comme un unsigned char systematiquememt (1 octet)
 * Pour un tableau de int = 4 octets, partie basse de l'hexago est prise
 * Question : what if pas assre doctets alloues ??
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	c = (unsigned char) c;
	ptr = (unsigned char *) s;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int     main (int argc, char **argv)
{
    printf("%s \n",ft_memset(argv[1], atoi(argv[2]), atoi(argv[3])));
	printf("%s",memset(argv[1], atoi(argv[2]), atoi(argv[3])));
}
*/