/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:19:13 by htong             #+#    #+#             */
/*   Updated: 2023/12/16 20:54:15 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *) s;
	while (i < n)
	{
		if (*ptr == (unsigned char) c)
			return ((void *) ptr);
		i++;
		ptr++;
	}
	return (0);
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int     main (int argc, char **argv)
{
    printf("%s \n", (char *) ft_memchr(argv[1], atoi(argv[2]), atoi(argv[3])));
    printf("%s \n", (char *) memchr(argv[1], atoi(argv[2]), atoi(argv[3])));

}
*/