/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htong <htong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:33:06 by htong             #+#    #+#             */
/*   Updated: 2023/12/15 20:39:16 by htong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t				i;
	void				*ptr;

	i = 0;
	if (nmemb != 0)
	{
		if (size > 2147483647 / nmemb)
			return (0);
	}
	ptr = (unsigned char *) malloc(nmemb * size);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	main(int ac, char **av) // COmment saturer une me;oire
{
	if (ac != 2)
		return (0);
	printf("%s \n", (char *) ft_calloc(atoi(av[1]), atoi(av[2])));
    printf("%s", (char *) calloc(atoi(av[1]), atoi(av[2])));
	return (0);
}
*/
