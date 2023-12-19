/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:07:02 by htong             #+#    #+#             */
/*   Updated: 2023/11/09 18:04:09 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	ss1 = (unsigned char *) s1;
	ss2 = (unsigned char *) s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (ss1[i] - ss2[i]);
}

/* Comportement indefini si n > len(bloc memoire)
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int     main (int argc, char **argv)
{
    printf("%d \n", ft_memcmp(argv[1], argv[2], atoi(argv[3])));
    printf("%d \n", memcmp(argv[1], argv[2], atoi(argv[3])));
    return(0);
}
*/
